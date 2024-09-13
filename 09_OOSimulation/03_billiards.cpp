#include <iostream>
#include <cstdlib>
using namespace std;

class Ball;

class Table {
public:
    Table(double w, double h);
    bool contains_point(double x, double y);
    void reflect(Ball* b);
private:
    double width;
    double height;
};

class Ball {
public:
    Ball(double _x, double _y, double _vx, double _vy, Table* t);
    void move(double dt);
    double get_x() { return x; }
    double get_y() { return y; }
    double get_vx() { return vx; }
    double get_vy() { return vy; }
    void set_location(double _x, double _y);
    void set_speed(double _vx, double _vy);
private:
    double x;
    double y;
    double vx;
    double vy;
    Table* table;
};

Table::Table(double w, double h) 
{
    if (w <= 0 || h <= 0)
        abort();
    width = w;
    height = h;
}

bool Table::contains_point(double x, double y) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

void Table::reflect(Ball* b) {
    double x = b->get_x();
    double y = b->get_y();
    double vx = b->get_vx();
    double vy = b->get_vy();
    
    while (!contains_point(x, y)) {
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
    b->set_location(x, y);
    b->set_speed(vx, vy);
}


Ball::Ball(double _x, double _y, double _vx, double _vy, Table* t)
{
    table = t;
    set_location(_x, _y);
    set_speed(_vx, _vy);
}

void Ball::set_location(double _x, double _y) {
    if (!table->contains_point(_x, _y))
        abort();
    x = _x;
    y = _y;
}

void Ball::set_speed(double _vx, double _vy) {
    vx = _vx;
    vy = _vy;
}

void Ball::move(double dt)
{
    x += vx * dt;
    y += vy * dt;
    
    if (!table->contains_point(x, y))
        table->reflect(this);
}

// b.move(1);

int main()
{
    Table t(100, 50);
    Ball b(10, 20, 25, 5, &t);
    b.move(10); 
}