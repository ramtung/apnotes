#include <stdexcept>
using namespace std;

class Ball;

class Table {
public:
  Table(double width, double height);
  bool IsWithinBounds(double x, double y);
  void Reflect(Ball* b);
private:
  double width_;
  double height_;
};

class Ball {
public:
  Ball(double x, double y, double vx, double vy, Table* table);
  void Move(double dt);
  double x() { return x_; }
  double y() { return y_; }
  double vx() { return vx_; }
  double vy() { return vy_; }
  void set_location(double _x, double _y);
  void set_speed(double _vx, double _vy);
private:
  double x_;
  double y_;
  double vx_;
  double vy_;
  Table* table_;
};

Table::Table(double width, double height) 
{
  if (width <= 0 || height <= 0)
    abort();
  width_ = width;
  height_ = height;
}

bool Table::IsWithinBounds(double x, double y) {
  return x >= 0 && x < width_ && y >= 0 && y < height_;
}

void Table::Reflect(Ball* b) {
  double x = b->x();
  double y = b->y();
  double vx = b->vx();
  double vy = b->vy();
  
  while (!IsWithinBounds(x, y)) {
    if (x < 0) {
      x = -x;
      vx = -vx;
    }
    if (x >= width_) {
      x = 2 * width_ - x;
      vx = -vx;
    }
    if (y < 0) {
      y = -y;
      vy = -vy;
    }
    if (y >= height_) {
      y = 2 * height_ - y;
      vy = -vy;
    }
  }
  b->set_location(x, y);
  b->set_speed(vx, vy);
}


Ball::Ball(double x, double y, double vx, double vy, Table* table) {
  table_ = table;
  set_location(x, y);
  set_speed(vx, vy);
}

void Ball::set_location(double x, double y) {
  if (!table_->IsWithinBounds(x, y))
    throw invalid_argument("Ball position out of bounds");
  x_ = x;
  y_ = y;
}

void Ball::set_speed(double vx, double vy) {
  vx_ = vx;
  vy_ = vy;
}

void Ball::Move(double dt) {
  x_ += vx_ * dt;
  y_ += vy_ * dt;
  
  if (!table_->IsWithinBounds(x_, y_))
    table_->Reflect(this);
}

int main() {
  Table t(100, 50);
  Ball b(10, 20, 25, 5, &t);
  b.Move(10); 
}