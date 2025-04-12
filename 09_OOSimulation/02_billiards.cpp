#include <iostream>
#include <stdexcept>
using namespace std;

class Table {
public:
  Table(double w, double h);
  bool containsPoint(double x, double y);
  void reflect(double& x, double& y, double& vx, double& vy);
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

bool Table::containsPoint(double x, double y) {
  return x >= 0 && x < width && y >= 0 && y < height;
}

void Table::reflect(double& x, double& y, double& vx, double& vy) {
  if (x < 0) {
    x = -x;
    vx = -vx;
  }
  if (x >= width) {
    x = 2 * width - x;
    vx = -vx;
  }
  if (y < 0) {
    y = -y;
    vy = -vy;
  }
  if (y >= height) {
    y = 2 * height - y;
    vy = -vy;
  }
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
private:
  double x;
  double y;
  double vx;
  double vy;
  Table* table;
};

Ball::Ball(double _x, double _y, double _vx, double _vy, Table* t) {
  table = t;
  if (!table->containsPoint(_x, _y))
    throw invalid_argument("Ball position out of bounds");
  x = _x;
  y = _y;
  vx = _vx;
  vy = _vy;
}

void Ball::move(double dt) {
  x += vx * dt;
  y += vy * dt;  
  while (!table->containsPoint(x, y))
    table->reflect(x, y, vx, vy);
}

int main() {
  Table t(100, 50);
  Ball b(10, 20, 25, 5, &t);
  b.move(10); 
}