#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int _x=0, int _y=0) : x(_x), y(_y) {}

    // Métodos getters
    int getX() const { return x; }
    int getY() const { return y; }

    // Métodos setters
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }

    // Método para imprimir el punto
    void print() const {
        cout << "(" << x << "," << y << ")" << endl;
    }
};