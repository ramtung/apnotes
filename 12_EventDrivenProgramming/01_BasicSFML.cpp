#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

class Player {
public:
  Player(int _x, int _y) : x_(_x), y_(_y), shape_(10.f) {
    shape_.setPosition(x_, y_);
    shape_.setFillColor(Color::Green);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape_);
  }

  void MoveDown() {
    y_ += 10;
    shape_.setPosition(x_, y_);
  }
private:
  CircleShape shape_;
  int x_;
  int y_;
};

class MadDonkey {
public:
  MadDonkey(int _x, int _y) : x_(_x), y_(_y), shape_(10.f) {
    shape_.setPosition(x_, y_);
    shape_.setFillColor(Color::White);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape_);
  }
private:
  CircleShape shape_;
  int x_;
  int y_;
};

class Game {
public:
  Game() : player_(50, 50), donkey_(100, 100) {}

  void Draw(RenderWindow& window) {
    window.clear();
    player_.Draw(window);
    donkey_.Draw(window);
  }

  void MoveDown() {
    player_.MoveDown();
  }
private:
  Player player_;
  MadDonkey donkey_;
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
          game.MoveDown();
        }
      }    
    }
    game.Draw(window);
    window.display();
  }

  return 0;
}