#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

class Player {
public:
  Player(int _x, int _y) : x(_x), y(_y), shape(10.f) {
    shape.setPosition(x, y);
    shape.setFillColor(Color::Green);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape);
  }

  void MoveDown() {
    y += 10;
    shape.setPosition(x, y);
  }
private:
  CircleShape shape;
  int x;
  int y;
};

class MadDonkey {
public:
  MadDonkey(int _x, int _y) : x(_x), y(_y), shape(10.f) {
    shape.setPosition(x, y);
    shape.setFillColor(Color::White);
  }

  void Draw(RenderWindow& window) {
    window.draw(shape);
  }
private:
  CircleShape shape;
  int x;
  int y;
};

class Game {
public:
  Game() : player(50, 50), donkey(100, 100) {}

  void Draw(RenderWindow& window) {
    window.clear();
    player.Draw(window);
    donkey.Draw(window);
  }

  void MoveDown() {
    player.MoveDown();
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
          game.MoveDown();
        }
      }    
    }
    game.Draw(window);
    window.display();
  }

  return 0;
}