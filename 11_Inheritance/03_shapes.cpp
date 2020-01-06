#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class IllegalArgumentException {};

class Shape {
public:
    Shape(int init_x, int init_y) : x(init_x), y(init_y) {}
    int get_x() const { return x; }
    int get_y() const { return y; }
    void move(int dx, int dy);

    virtual void scale(int s) = 0;
    virtual void print() = 0;
protected:
    int x;
    int y;
};

void Shape::move(int dx, int dy)
{
    x += dx;
    y += dy;
}

class Rect : public Shape {
public:
    Rect(int init_x, int init_y, int w, int h);
    virtual void scale(int s);
    virtual void print();
private:
    int width;
    int height;
};

Rect::Rect(int init_x, int init_y, int w, int h)
    : Shape(init_x, init_y)
{
    if (w <= 0 || h <= 0)
	    throw IllegalArgumentException();
    width = w;
    height = h;
}

void Rect::scale(int s)
{
    width *= s;
    height *= s;
}

void Rect::print()
{
    cout << "Rect: " << x << ',' << y << ',' << width << ',' << height << endl;
}

class Circle : public Shape {
public:
    Circle(int init_x, int init_y, int r);
     void scale(int s);
    virtual void print();
private:
    int radius;
};

Circle::Circle(int init_x, int init_y, int r)
    : Shape(init_x, init_y)
{
    if (r <= 0)
	    throw IllegalArgumentException();
    radius = r;
}

void Circle::scale(int s)
{
    radius *= s;
}

void Circle::print()
{
    cout << "Circle: " << x << ',' << y << ',' << radius << endl;
}

int main()
{
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
            for (int i = 0; i < shapes.size(); i++)
                shapes[i]->print();
            cout<< endl;

        } else if (ch == 'm') {
            int dx, dy;
            cout << "enter dx, dy: ";
            cin >> dx >> dy;
            for (int i = 0; i < shapes.size(); i++)
                shapes[i]->move(dx, dy);
            
        } else if (ch == 's') {
            int s;
            cout << "enter s: ";
            cin >> s;
            for (int i = 0; i < shapes.size(); i++)
                shapes[i]->scale(s);
        }
        else if (ch == 'q') {
            for (int i = 0; i < shapes.size(); i++)
                delete shapes[i];
            break;
        }
    } // while (true)
}	





