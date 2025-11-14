#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace sf;
using namespace std;

enum Direction {LEFT, UP, RIGHT, DOWN};
int DELTA_X[4] = {-1, 0, 1, 0};
int DELTA_Y[4] = {0, -1, 0, 1};

const int MADNESS = 10;
const int STEP_SIZE = 5;

class Player {
public:
  Player(RenderWindow& window, int x = 0, int y = 0) : 
      window_(window) {
    texture_.loadFromFile("farmer.png");
    sprite_.setTexture(texture_);
    GoTo(x, y);
  }

  void GoTo(int x, int y) {
    x_ = x;
    y_ = y;
    sprite_.setPosition(x, y);
  }

  void Draw() {
    window_.draw(sprite_);
  }

  void Move(Direction direction) {
    int new_x = x_ + DELTA_X[direction] * STEP_SIZE;
    int new_y = y_ + DELTA_Y[direction] * STEP_SIZE;
    if (new_x >= 0 && new_x < window_.getSize().x && new_y >= 0 && new_y < window_.getSize().y) {
      x_ = new_x;
      y_ = new_y;
      sprite_.setPosition(x_, y_);
    }
  }

  FloatRect get_bounds() {
    return sprite_.getGlobalBounds();
  }
private:
  RenderWindow& window_;
  Texture texture_;
  Sprite sprite_;
  int x_;
  int y_;
};

class MadDonkey {
public:
  MadDonkey(RenderWindow& window, int x = 0, int y = 0) : 
      window_(window) 
  {
    stepsSinceLastTurn_ = 0;
    direction_ = (Direction)(rand() % 4);
    if (!texture_.loadFromFile("donkey.png"))
      abort();
    sprite_.setTexture(texture_);
    GoTo(x, y);
  }
  
  void GoTo(int x, int y) {
    x_ = x;
    y_ = y;
    sprite_.setPosition(x, y);
  }

  void Draw() {
    window_.draw(sprite_);
  }

  void Move() {
    if (stepsSinceLastTurn_ == MADNESS) {
      direction_ = (Direction)(rand() % 4);
      stepsSinceLastTurn_ = 1;
    }
    stepsSinceLastTurn_++;

    x_ += DELTA_X[direction_] * STEP_SIZE;
    y_ += DELTA_Y[direction_] * STEP_SIZE;
    if (x_ < 0) {
      direction_ = RIGHT;
      x_ = -x_;
    }
    if (x_ >= window_.getSize().x) {
      direction_ = LEFT;
      x_ = 2 * window_.getSize().x - x_;
    }
    if (y_ < 0) {
      direction_ = DOWN;
      y_ = -y_;
    }
    if (y_ >= window_.getSize().y) {
      direction_ = UP;
      y_ = 2 * window_.getSize().y - y_;
    }

    sprite_.setPosition(x_, y_);
  }
  FloatRect get_bounds() {
    return sprite_.getGlobalBounds();
  }
private:
  int x_;
  int y_;
  int stepsSinceLastTurn_;
  Direction direction_;
  
  RenderWindow& window_;
  Texture texture_;
  Sprite sprite_;
};

class Game {
public:
  Game(RenderWindow& window) : window_(window), player_(window), donkey_(window) {
    started_ = false;
    game_over_ = false;
    splash_mode_ = true;
    PlaceRandomly();
    InitTexts();
    InitGraphics();
    InitMusic();
  }

  void Draw(RenderWindow& window) {
    window.clear();
    if (splash_mode_) {
      window.draw(splash_sprite_);
      window.draw(splash_text_);
      return;
    }

    window.draw(bk_sprite_);

    player_.Draw();
    donkey_.Draw();
    if (game_over_)
      window.draw(game_over_text_);
    if (!started_)
      if (game_over_)
        window.draw(reset_text_);
      else
        window.draw(start_text_);
  }
  void MovePlayer(Direction direction) {
    if (!started_)
      return;
    player_.Move(direction);
  }
  void Tick() {
    if (started_ && IsOver()) {
      GameOver();
    }
    if (!started_)
      return;
    donkey_.Move();
  }
  bool IsOver() {
    Rect donkey_bounds = donkey_.get_bounds();
    Vector2f donkey_center(
      (donkey_bounds.left + donkey_bounds.width/2),
      (donkey_bounds.top + donkey_bounds.height/2));
    Rect player_bounds = player_.get_bounds();
    Vector2f player_center(
      (player_bounds.left + player_bounds.width/2),
      (player_bounds.top + player_bounds.height/2));
    
    return (abs(donkey_center.x - player_center.x) < 64) && (abs(donkey_center.y - player_center.y) < 64);
  }
  void Start() {
    started_ = true;
    game_over_ = false;
    gameover_music_.stop();
    ingame_music_.play();
  }
  void GameOver() {
    game_over_ = true;
    started_ = false;
    ingame_music_.stop();
    gameover_music_.play();
  }
  void Reset() {
    game_over_ = false;
    started_ = false;
    PlaceRandomly();
  }
  bool SplashMode() { return splash_mode_; }
  void ResetSplashMode() { 
    splash_mode_ = false; 
    splash_music_.stop();
  }
private:
  Font font_;
  Text start_text_;
  Text reset_text_;
  Text game_over_text_;
  Text splash_text_;
  Texture bk_texture_;
  Texture splash_texture_;
  Sprite bk_sprite_;
  Sprite splash_sprite_;
  RenderWindow& window_;
  Music splash_music_;
  Music ingame_music_;
  Music gameover_music_;

  bool started_;
  bool game_over_;
  bool splash_mode_;
  Player player_;
  MadDonkey donkey_;

  int width() { return window_.getSize().x; };
  int height() { return window_.getSize().y; };
  
  void PlaceRandomly() {
    while (IsOver()) {
      player_.GoTo(rand() % width(), rand() % height());
      donkey_.GoTo(rand() % width(), rand() % height());        
    }
  }
  
  void InitTexts() {
    if (!font_.loadFromFile("calibri.ttf")) {
      abort();
    }
    start_text_.setFont(font_);
    start_text_.setString("Press space to start!");
    start_text_.setCharacterSize(30);
    start_text_.setPosition(
      (width() - start_text_.getGlobalBounds().width) / 2, 
      height() - start_text_.getGlobalBounds().height - 25);
    start_text_.setFillColor(Color::White);

    reset_text_.setFont(font_);
    reset_text_.setString("Press space to play again!");
    reset_text_.setCharacterSize(30);
    reset_text_.setPosition(
      (width() - reset_text_.getGlobalBounds().width) / 2, 
      height() - reset_text_.getGlobalBounds().height - 25);
    reset_text_.setFillColor(Color::White);

    game_over_text_.setFont(font_);
    game_over_text_.setString("GAME OVER!");
    game_over_text_.setCharacterSize(80); 
    game_over_text_.setPosition(
      (width() - game_over_text_.getGlobalBounds().width) / 2, 
      (height() - game_over_text_.getGlobalBounds().height) / 2);
    game_over_text_.setFillColor(Color::Yellow);
    splash_text_.setOutlineColor(Color::Red);
    splash_text_.setOutlineThickness(5);
    game_over_text_.setStyle(Text::Bold);

    splash_text_.setFont(font_);
    splash_text_.setString("CATCH THE DONKEY!");
    splash_text_.setCharacterSize(80); 
    splash_text_.setPosition(
      (width() - splash_text_.getGlobalBounds().width) / 2, 
      (height() - splash_text_.getGlobalBounds().height) / 2);
    splash_text_.setFillColor(Color::Black);
    splash_text_.setOutlineColor(Color::White);
    splash_text_.setOutlineThickness(5);
    splash_text_.setStyle(Text::Bold);
  }

  void InitGraphics() {
    bk_texture_.loadFromFile("background.png");
    bk_sprite_.setTexture(bk_texture_);
    splash_texture_.loadFromFile("splash.jpg");
    splash_sprite_.setTexture(splash_texture_);
  }

  void InitMusic() {
    if (!splash_music_.openFromFile("splash.mp3"))
      abort();
    if (!ingame_music_.openFromFile("ingame.mp3"))
      abort();
    if (!gameover_music_.openFromFile("grunt.wav"))
      abort();
    ingame_music_.setLoop(true);
    splash_music_.play();
  }
};

int main() {
  int width = 900;
  int height = 600;
  srand(time(0));
  RenderWindow window(VideoMode(width, height), "SFML works!");
  Game game(window);

  Clock clock;
  while (window.isOpen()) {
    Event event;
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed)
        window.close();
      if (event.type == Event::KeyPressed) {
        if (game.SplashMode()) {
          game.ResetSplashMode();
        } else if (event.key.code == Keyboard::Down) {
          game.MovePlayer(DOWN);
        } else if (event.key.code == Keyboard::Up) {
          game.MovePlayer(UP);
        } else if (event.key.code == Keyboard::Left) {
          game.MovePlayer(LEFT);
        } else if (event.key.code == Keyboard::Right) {
          game.MovePlayer(RIGHT);
        } else if (event.key.code == Keyboard::Space) {
          if (game.IsOver())
            game.Reset();
          else
            game.Start();
        }
      }    
    }
    if (clock.getElapsedTime() >= milliseconds(50)) {
      clock.restart();
      game.Tick();
    }
    game.Draw(window);
    window.display();
  }

  return 0;
}