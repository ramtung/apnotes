#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
using namespace sf;
using namespace std;

enum Direction {LEFT, UP, RIGHT, DOWN};
int DELTA_X[4] = {-1, 0, 1, 0};
int DELTA_Y[4] = {0, -1, 0, 1};

const int MADNESS = 10;
const int STEP_SIZE = 5;

class Player {
public:
  Player(int _x, int _y) : x_(_x), y_(_y), shape_(10.f) {
    shape_.setPosition(x_, y_);
    shape_.setFillColor(Color::Green);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape_);
  }

  void Move(Direction direction) {
    int new_x = x_ + DELTA_X[direction] * STEP_SIZE;
    int new_y = y_ + DELTA_Y[direction] * STEP_SIZE;
    if (new_x >= 0 && new_x < 600 && new_y >= 0 && new_y < 600) {
      x_ = new_x;
      y_ = new_y;
      shape_.setPosition(x_, y_);
    }
  }

  FloatRect get_bounds() {
    return shape_.getGlobalBounds();
  }
private:
  CircleShape shape_;
  int x_;
  int y_;
};

class MadDonkey {
public:
  MadDonkey(int _x, int _y) : x_(_x), y_(_y) {
    stepsSinceLastTurn_ = 0;
    if (!texture_.loadFromFile("donkey.png"))
      abort();
    sprite_.setTexture(texture_);
    sprite_.setPosition(x_, y_);
  }

  void Draw(RenderWindow& window) {
    window.draw(sprite_);
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
    if (x_ >= 600) {
      direction_ = LEFT;
      x_ = 2 * 600 - x_;
    }
    if (y_ < 0) {
      direction_ = DOWN;
      y_ = -y_;
    }
    if (y_ >= 600) {
      direction_ = UP;
      y_ = 2 * 600 - y_;
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

  Texture texture_;
  Sprite sprite_;
};

class Game {
public:
  Game() : player_(50, 50), donkey_(300, 300) {}

  void Draw(RenderWindow& window) {
    window.clear();
    player_.Draw(window);
    donkey_.Draw(window);
  }
  void MovePlayer(Direction direction) {
    player_.Move(direction);
  }
  void MoveDonkey() {
    donkey_.Move();
  }
  void Tick() {
    donkey_.Move();
  }
  bool IsOver() {
    return donkey_.get_bounds().intersects(player_.get_bounds());
  }
private:
  Player player_;
  MadDonkey donkey_;
};

int main()
{
  RenderWindow window(VideoMode(600, 600), "SFML works!");
  Game game;

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
        } else if (event.key.code == Keyboard::D) {
          game.MoveDonkey();
        }
      }    
    }
    if (game.IsOver()) {
      cout << "GAME OVER!" << endl;
      break;
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