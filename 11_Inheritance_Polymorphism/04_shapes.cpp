#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;

class Shape {
public:
  Shape(int x, int y) : x_(x), y_(y) {}
  int x() const { return x_; }
  int y() const { return y_; }
  void move(int dx, int dy);

  virtual void scale(int factor) = 0;
  virtual void print() = 0;
protected:
  int x_;
  int y_;
};

void Shape::move(int dx, int dy) {
  x_ += dx;
  y_ += dy;
}

class Rect : public Shape {
public:
  Rect(int x, int y, int width, int height);
  virtual void scale(int factor);
  virtual void print();
private:
  int width_;
  int height_;
};

Rect::Rect(int x, int y, int width, int height)
  : Shape(x, y)
{
  if (width <= 0 || height <= 0)
	  throw invalid_argument("invalid width and height");
  width_ = width;
  height_ = height;
}

void Rect::scale(int factor) {
  width_ *= factor;
  height_ *= factor;
}

void Rect::print() {
  cout << "Rect: " << x_ << ',' << y_ << ',' 
       << width_ << ',' << height_ << endl;
}

class Circle : public Shape {
public:
  Circle(int x, int y, int radius);
   void scale(int factor);
  virtual void print();
private:
  int radius_;
};

Circle::Circle(int x, int y, int radius)
  : Shape(x, y)
{
  if (radius <= 0)
	  throw invalid_argument("invalid radius");
  radius_ = radius;
}

void Circle::scale(int factor) {
  radius_ *= factor;
}

void Circle::print() {
  cout << "Circle: " << x_ << ',' << y_ 
       << ',' << radius_ << endl;
}

int main() {
  vector<Shape*> shapes;
  
  while (true) {
    cout << "r. New Rectangle\n";
    cout << "c. New Circle\n";
    cout << "p. Display Shapes\n";
    cout << "m. Move All\n";
    cout << "s. Scale All\n";
    cout << "q. Exit\n";
    
    char ch;  
    cin >> ch;
      
    if (ch == 'r') {
      int x, y, w, h;
      cout << "enter x, y, width, and height: ";
      cin >> x >> y >> w >> h;
      
      Rect *rect = new Rect(x, y, w, h);
      shapes.push_back(rect);
      
    } else if (ch == 'c') {
      int x, y, r;
      cout << "enter x, y, and radius: ";
      cin >> x >> y >> r;
      
      Circle *circ = new Circle(x, y, r);
      shapes.push_back(circ);
    
    } else if (ch == 'p') {
      for (Shape* shape: shapes)
        shape->print();
      cout<< endl;

    } else if (ch == 'm') {
      int dx, dy;
      cout << "enter dx, dy: ";
      cin >> dx >> dy;
      for (int i = 0; i < shapes.size(); i++)
        shapes[i]->move(dx, dy);
      
    } else if (ch == 's') {
      int factor;
      cout << "enter factor: ";
      cin >> factor;
      for_each(shapes.begin(), shapes.end(), [factor](Shape* shape) {;
        shape->scale(factor);
      });
    }
    else if (ch == 'q') {
      for (int i = 0; i < shapes.size(); i++)
        delete shapes[i];
      break;
    }
  } // while (true)
}