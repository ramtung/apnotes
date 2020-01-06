#include <iostream>
#include <cstdlib>
using namespace std;

class Ball;

class Table {
public:
    Table(int w, int h);
    bool contains_point(int x, int y);
    void reflect(Ball* b);
private:
    int width;
    int height;
};

class Ball {
public:
    Ball(int _x, int _y, int _vx, int _vy, Table* t);
    void move(int dt);
    int get_x() { return x; }
    int get_y() { return y; }
    int get_vx() { return vx; }
    int get_vy() { return vy; }
    void set_location(int _x, int _y);
    void set_speed(int _vx, int _vy);
private:
    int x;
    int y;
    int vx;
    int vy;
    Table* table;
};

Table::Table(int w, int h) 
{
    if (w <= 0 || h <= 0)
        abort();
    width = w;
    height = h;
}

bool Table::contains_point(int x, int y) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

void Table::reflect(Ball* b) {
    int x = b->get_x();
    int y = b->get_y();
    int vx = b->get_vx();
    int vy = b->get_vy();
    
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


Ball::Ball(int _x, int _y, int _vx, int _vy, Table* t)
{
    table = t;
    set_location(_x, _y);
    set_speed(_vx, _vy);
}

void Ball::set_location(int _x, int _y) {
    if (!table->contains_point(_x, _y))
        abort();
    x = _x;
    y = _y;
}

void Ball::set_speed(int _vx, int _vy) {
    vx = _vx;
    vy = _vy;
}

void Ball::move(int dt)
{
    x += vx * dt;
    y += vy * dt;
    
    if (!table->contains_point(x, y))
        table->reflect(this);
}

int main()
{
    Table t(100, 50);
    Ball b(10, 20, 25, 5, &t);
    b.move(10); 
}