#include <stdexcept>
using namespace std;

class Table {
public:
  Table(double width, double height);
  double width() { return width_; }
  double height() { return height_; }
private:
  double width_;
  double height_;
};

Table::Table(double width, double height) {
  if (width <= 0 || height <= 0)
    throw invalid_argument("Table dimensions must be positive");
  width_ = width;
  height_ = height;
}

class Ball {
public:
  Ball(double x, double y, double vx, double vy, Table* table);
  void Move(double dt);
  double x() { return x_; }
  double y() { return y_; }
  double vx() { return vx_; }
  double vy() { return vy_; }
private:
  double x_;
  double y_;
  double vx_;
  double vy_;
  Table* table_;
};

Ball::Ball(double x, double y, double vx, double vy, Table* table) {
  table_ = table;
  if (x_ < 0 || x_ >= table_->width() || y_ < 0 || y_ >= table_->height())
    throw invalid_argument("Ball position out of bounds");
  x_ = x;
  y_ = y;
  vx_ = vx;
  vy_ = vy;
}

void Ball::Move(double dt) {
  x_ += vx_ * dt;
  y_ += vy_ * dt;
  
  while (x_ < 0 || x_ >= table_->width() || 
         y_ < 0 || y_ >= table_->height()) {
    if (x_ < 0) {
      x_ = -x_;
      vx_ = -vx_;
    }
    if (x_ >= table_->width()) {
      x_ = 2 * table_->width() - x_;
      vx_ = -vx_;
    }
    if (y_ < 0) {
      y_ = -y_;
      vy_ = -vy_;
    }
    if (y_ >= table_->height()) {
      y_ = 2 * table_->height() - y_;
      vy_ = -vy_;
    }
  }
}

int main() {
  Table t(100, 50);
  Ball b(10, 20, 25, 5, &t);
  b.Move(10); 
}