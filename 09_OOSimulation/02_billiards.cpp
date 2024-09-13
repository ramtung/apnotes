#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    double x;
    double y;
};

class Vector {
    double x;
    double y;
}

class MotionState {
    Point location;
    Vector velocity;
};

class Table {
public:
    Table(double w, double h);
    bool contains_point(Point p);
    MotionState reflect(MotionState mo);
private:
    double width;
    double height;
};

Table::Table(double w, double h) 
{
    if (w <= 0 || h <= 0)
        abort();
    width = w;
    height = h;
}

bool Table::contains_point(Point p) {
    return p.x >= 0 && p.x < width && p.y >= 0 && p.y < height;
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
    double get_x() { return x; }
    double get_y() { return y; }
    double get_vx() { return vx; }
    double get_vy() { return vy; }
private:
    MotionState mo;
    Table* table;
};

Ball::Ball(double _x, double _y, double _vx, double _vy, Table* t)
{
    table = t;
    if (!table->contains_point(_x, _y))
        abort();
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
}

void Ball::move(double dt)
{
    location.translate(vx * dt, vy * dt);
    
    while (!table->contains_point(location))
        mo = table->reflect(mo);
}

int main()
{
    Table t(100, 50);
    Ball b(10, 20, 25, 5, &t);
    b.move(10); 
}