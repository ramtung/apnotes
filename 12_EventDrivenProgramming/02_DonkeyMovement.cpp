#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

enum Direction {LEFT, UP, RIGHT, DOWN};
int DELTA_X[4] = {-1, 0, 1, 0};
int DELTA_Y[4] = {0, -1, 0, 1};

const int MADNESS = 10;
const int STEP_SIZE = 5;

class Player {
public:
  Player(int _x, int _y) : x(_x), y(_y), shape(10.f) {
    shape.setPosition(x, y);
    shape.setFillColor(Color::Green);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape);
  }

  void Move(Direction direction) {
    int new_x = x + DELTA_X[direction] * STEP_SIZE;
    int new_y = y + DELTA_Y[direction] * STEP_SIZE;
    if (new_x >= 0 && new_x < 600 && new_y >= 0 && new_y < 600) {
      x = new_x;
      y = new_y;
      shape.setPosition(x, y);
    }
  }
private:
  CircleShape shape;
  int x;
  int y;
};

class MadDonkey {
public:
  MadDonkey(int _x, int _y) : x(_x), y(_y), shape(10.f) {
    direction = (Direction)(rand() % 4);
    shape.setPosition(x, y);
    shape.setFillColor(Color::White);
    stepsSinceLastTurn = 0;
  }

  void Draw(RenderWindow& window) {
    window.draw(shape);
  }

  void Move() {
    if (stepsSinceLastTurn == MADNESS) {
      direction = (Direction)(rand() % 4);
      stepsSinceLastTurn = 1;
    }
    stepsSinceLastTurn++;

    x += DELTA_X[direction] * STEP_SIZE;
    y += DELTA_Y[direction] * STEP_SIZE;
    if (x < 0) {
      direction = RIGHT;
      x = -x;
    }
    if (x >= 600) {
      direction = LEFT;
      x = 2 * 600 - x;
    }
    if (y < 0) {
      direction = DOWN;
      y = -y;
    }
    if (y >= 600) {
      direction = UP;
      y = 2 * 600 - y;
    }

    shape.setPosition(x, y);
  }
private:
  CircleShape shape;
  int x;
  int y;
  int stepsSinceLastTurn;
  Direction direction;
};

class Game {
public:
  Game() : player(50, 50), donkey(100, 100) {}

  void Draw(RenderWindow& window) {
    window.clear();
    player.Draw(window);
    donkey.Draw(window);
  }
  void MovePlayer(Direction direction) {
    player.Move(direction);
  }
  void MoveDonkey() {
    donkey.Move();
  }
private:
  Player player;
  MadDonkey donkey;
};

int main() {
  RenderWindow window(VideoMode(600, 600), "SFML works!");
  Game game;

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
    game.Draw(window);
    window.display();
  }

  return 0;
}