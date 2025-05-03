#include <stdexcept>
using namespace std;

class Table {
public:
  Table(double width, double height);
  bool IsWithinBounds(double x, double y);
  void Reflect(double& x, double& y, double& vx, double& vy);
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

bool Table::IsWithinBounds(double x, double y) {
  return x >= 0 && x < width_ && y >= 0 && y < height_;
}

void Table::Reflect(double& x, double& y, double& vx, double& vy) {
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

class Ball {
public:
  Ball(double x, double y, double vx, double vy, Table* table);
  void Move(double dt);
  double x() { return x_; }
  double y() { return y_; }
  double vx() { return vx_; }
  double vy() { return vy_; }
private:
private:
  double x_;
  double y_;
  double vx_;
  double vy_;
  Table* table_;
};

Ball::Ball(double x, double y, double vx, double vy, Table* table) {
  table_ = table;
  if (!table_->IsWithinBounds(x, y))
    throw invalid_argument("Ball position out of bounds");
  x_ = x;
  y_ = y;
  vx_ = vx;
  vy_ = vy;
}

void Ball::Move(double dt) {
  x_ += vx_ * dt;
  y_ += vy_ * dt;  
  while (!table_->IsWithinBounds(x_, y_))
    table_->Reflect(x_, y_, vx_, vy_);
}

int main() {
  Table t(100, 50);
  Ball b(10, 20, 25, 5, &t);
  b.Move(10); 
}