#include <iostream>
#include <cstdlib>
using namespace std;

class Table {
public:
    Table(int w, int h);
    int get_width() { return width; }
    int get_height() { return height; }
private:
    int width;
    int height;
};

Table::Table(int w, int h) 
{
    if (w <= 0 || h <= 0)
        abort();
    width = w;
    height = h;
}

class Ball {
public:
    Ball(int _x, int _y, int _vx, int _vy, Table* t);
    void move(int dt);
    int get_x() { return x; }
    int get_y() { return y; }
    int get_vx() { return vx; }
    int get_vy() { return vy; }
private:
    int x;
    int y;
    int vx;
    int vy;
    Table* table;
};

Ball::Ball(int _x, int _y, int _vx, int _vy, Table* t)
{
    table = t;
    if (x < 0 || x >= table->get_width() || y < 0 || y >= table->get_height())
        abort();
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
}

void Ball::move(int dt)
{
    x += vx * dt;
    y += vy * dt;
    
    while (x < 0 || x >= table->get_width() || y < 0 || y >= table->get_height()) {
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