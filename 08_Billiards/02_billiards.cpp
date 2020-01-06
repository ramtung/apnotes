#include <iostream>
#include <cstdlib>
using namespace std;

class Table {
public:
    Table(int w, int h);
    bool contains_point(int x, int y);
    void reflect(int& x, int& y, int& vx, int& vy);
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

bool Table::contains_point(int x, int y) {
    return x >= 0 && x < width && y >= 0 && y < height;
}

void Table::reflect(int& x, int& y, int& vx, int& vy) {
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
    if (!table->contains_point(_x, _y))
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
    
    while (!table->contains_point(x, y))
        table->reflect(x, y, vx, vy);
}

int main()
{
    Table t(100, 50);
    Ball b(10, 20, 25, 5, &t);
    b.move(10); 
}