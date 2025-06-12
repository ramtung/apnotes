#include <cstdint>
#include <iostream>
using namespace std;

class Color {
public:
  static const Color BLACK;
  static const Color WHITE;
  static const Color RED;
  static const Color GREEN;
  static const Color BLUE;

  Color(uint8_t red, uint8_t green, uint8_t blue)
    : red_(red), green_(green), blue_(blue) {}

  int red() const { return red_; }
  int green() const { return green_; }
  int blue() const { return blue_; }
private:
  uint8_t red_;
  uint8_t green_;
  uint8_t blue_;
};

const Color Color::BLACK(0, 0, 0);
const Color Color::WHITE(255, 255, 255);
const Color Color::RED(255,0,0);
const Color Color::GREEN(0,255,0);
const Color Color::BLUE(0,0,255);

int main() {
  cout << Color::WHITE.red() << endl;
}