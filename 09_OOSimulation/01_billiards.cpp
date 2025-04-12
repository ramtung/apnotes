#include <iostream>
#include <stdexcept>
using namespace std;

class Table {
public:
  Table(double w, double h);
  double getWidth() { return width; }
  double getHeight() { return height; }
private:
  double width;
  double height;
};

Table::Table(double w, double h) {
  if (w <= 0 || h <= 0)
    throw invalid_argument("Table dimensions must be positive");
  width = w;
  height = h;
}

class Ball {
public:
  Ball(double _x, double _y, double _vx, double _vy, Table* t);
  void move(double dt);
  double getX() { return x; }
  double getY() { return y; }
  double getVx() { return vx; }
  double getVy() { return vy; }
private:
  double x;
  double y;
  double vx;
  double vy;
  Table* table;
};

Ball::Ball(double _x, double _y, double _vx, double _vy, Table* t) {
  table = t;
  if (x < 0 || x >= table->getWidth() || y < 0 || y >= table->getHeight())
    throw invalid_argument("Ball position out of bounds");
  x = _x;
  y = _y;
  vx = _vx;
  vy = _vy;
}

void Ball::move(double dt) {
  x += vx * dt;
  y += vy * dt;
  
  while (x < 0 || x >= table->getWidth() || y < 0 || y >= table->getHeight()) {
    if (x < 0) {
      x = -x;
      vx = -vx;
    }
    if (x >= table->getWidth()) {
      x = 2 * table->getWidth() - x;
      vx = -vx;
    }
    if (y < 0) {
      y = -y;
      vy = -vy;
    }
    if (y >= table->getHeight()) {
      y = 2 * table->getHeight() - y;
      vy = -vy;
    }
  }
}

int main()
{
  Table t(100, 50);
  Ball b(10, 20, 25, 5, &t);
  b.move(10); 
}