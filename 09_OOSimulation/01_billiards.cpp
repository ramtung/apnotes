#include <iostream>
#include <cstdlib>
using namespace std;

class Table {
public:
    Table(double w, double h);
    bool contains(double x, double y) {
        return x >= 0 && x <= width && y >= 0 && y < height;
    }
    double get_width() { return width; }
    double get_height() { return height; }
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

class Ball {
public:
    Ball(double _x, double _y, double _vx, double _vy, Table* t);
    void move(double dt);
    double get_x() { return x; }
    double get_y() { return y; }
    double get_vx() { return vx; }
    double get_vy() { return vy; }
private:
    double x;
    double y;
    double vx;
    double vy;
    Table* table;
};

Ball::Ball(double _x, double _y, double _vx, double _vy, Table* t)
{
    table = t;
    if (!table->contains(_x, _y))
        abort();
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
}

void Ball::move(double dt)
{
    x += vx * dt;
    y += vy * dt;
    
    while (!table->contains(x, y)) {
        if (x < 0) {
            x = -x;
            vx = -vx;
        }
        if (x >= table->get_width()) {
            x = 2 * table->get_width() - x;
            vx = -vx;
        }
        if (y < 0) {
            y = -y;
            vy = -vy;
        }
        if (y >= table->get_height()) {
            y = 2 * table->get_height() - y;
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