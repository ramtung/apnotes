#include <SFML/Graphics.hpp>
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
      window_(window),
      shape_(10.f) {
    shape_.setFillColor(Color::Green);
    GoTo(x, y);
  }

  void GoTo(int x, int y) {
    x_ = x;
    y_ = y;
    shape_.setPosition(x, y);
  }

  void Draw() {
    window_.draw(shape_);
  }

  void Move(Direction direction) {
    int new_x = x_ + DELTA_X[direction] * STEP_SIZE;
    int new_y = y_ + DELTA_Y[direction] * STEP_SIZE;
    if (new_x >= 0 && new_x < window_.getSize().x && new_y >= 0 && new_y < window_.getSize().y) {
      x_ = new_x;
      y_ = new_y;
      shape_.setPosition(x_, y_);
    }
  }

  FloatRect get_bounds() {
    return shape_.getGlobalBounds();
  }
private:
  RenderWindow& window_;
  CircleShape shape_;
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
    PlaceRandomly();
    InitTexts();
  }

  void Draw(RenderWindow& window) {
    window.clear();
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
    if (!started_)
      return;
    donkey_.Move();
  }
  bool IsOver() {
    return donkey_.get_bounds().intersects(player_.get_bounds());
  }
  void Start() {
    started_ = true;
    game_over_ = false;
  }
  void GameOver() {
    game_over_ = true;
    started_ = false;
  }
  void Reset() {
    game_over_ = false;
    started_ = false;
    PlaceRandomly();
  }
private:
  Font font_;
  Text start_text_;
  Text reset_text_;
  Text game_over_text_;
  RenderWindow& window_;

  bool started_;
  bool game_over_;
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
    game_over_text_.setCharacterSize(50); 
    game_over_text_.setPosition(
      (width() - game_over_text_.getGlobalBounds().width) / 2, 
      (height() - game_over_text_.getGlobalBounds().height) / 2);
    game_over_text_.setFillColor(Color::Red);
  }
};

int main() {
  int width = 600;
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
        if (event.key.code == Keyboard::Down) {
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
    if (game.IsOver()) {
      game.GameOver();
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