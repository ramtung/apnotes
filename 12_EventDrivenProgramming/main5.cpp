#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
using namespace sf;
using namespace std;

enum Direction {LEFT, UP, RIGHT, DOWN};
int delta_x[4] = {-1, 0, 1, 0};
int delta_y[4] = {0, -1, 0, 1};
const int MADNESS = 10;
const int STEP_SIZE = 5;

class Player {
public:
    Player(int _x, int _y) : x(_x), y(_y), shape(10.f) {
        shape.setPosition(x, y);
        shape.setFillColor(Color::Green);
    }

    void draw(RenderWindow& window) {
        window.draw(shape);
    }

    void move(Direction direction) {
        int new_x = x + delta_x[direction] * STEP_SIZE;
        int new_y = y + delta_y[direction] * STEP_SIZE;
        if (new_x >= 0 && new_x < 600 && new_y >= 0 && new_y < 600) {
            x = new_x;
            y = new_y;
            shape.setPosition(x, y);
        }
    }

    FloatRect getGlobalBounds() {
        return shape.getGlobalBounds();
    }
private:
    CircleShape shape;
    int x;
    int y;
};

class MadDonkey {
public:
    MadDonkey(int _x, int _y) : x(_x), y(_y) {
        stepsSinceLastTurn = 0;
        if (!texture.loadFromFile("donkey.png"))
            abort();
        sprite.setTexture(texture);
        sprite.setPosition(x, y);
    }

    void draw(RenderWindow& window) {
        window.draw(sprite);
    }

    void move() {
        if (stepsSinceLastTurn == MADNESS) {
            direction = (Direction)(rand() % 4);
            stepsSinceLastTurn = 1;
        }
        stepsSinceLastTurn++;

        x += delta_x[direction] * STEP_SIZE;
        y += delta_y[direction] * STEP_SIZE;
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

        sprite.setPosition(x, y);
    }
    FloatRect getGlobalBounds() {
        return sprite.getGlobalBounds();
    }
private:
    int x;
    int y;
    int stepsSinceLastTurn;
    Direction direction;

    Texture texture;
    Sprite sprite;
};

class Game {
public:
    Game() : player(50, 50), donkey(300, 300) {}

    void draw(RenderWindow& window) {
        window.clear();
        player.draw(window);
        donkey.draw(window);
    }
    void movePlayer(Direction direction) {
        player.move(direction);
    }
    void moveDonkey() {
        donkey.move();
    }
    void tick() {
        donkey.move();
    }
    bool is_over() {
        return donkey.getGlobalBounds().intersects(player.getGlobalBounds());
    }
private:
    Player player;
    MadDonkey donkey;
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
                    game.movePlayer(DOWN);
                } else if (event.key.code == Keyboard::Up) {
                    game.movePlayer(UP);
                } else if (event.key.code == Keyboard::Left) {
                    game.movePlayer(LEFT);
                } else if (event.key.code == Keyboard::Right) {
                    game.movePlayer(RIGHT);
                } else if (event.key.code == Keyboard::D) {
                    game.moveDonkey();
                }
            }        
        }
        if (game.is_over()) {
            cout << "GAME OVER!" << endl;
            break;
        }
        if (clock.getElapsedTime() >= milliseconds(50)) {
            game.tick();
            clock.restart();
        }
        game.draw(window);
        window.display();
    }

    return 0;
}