#include <iostream> 

using namespace std;

class Shape {
    public: 
    virtual void draw();
};

void Shape::draw() {
    cout << "Drawing a Shape \n";
}

class Circle : public Shape {
    void draw();
};

void Circle::draw() {
    cout << "Drawing a circle \n";
}

class Square : public Shape {
    void draw();
};

void Square::draw() {
    cout << "Drawing a square \n";
}

class Triangle : public Shape {
    void draw();
};

void Triangle::draw() {
    cout << "Drawing a triangle \n";
}

int main() {

    Shape *shapes[3];
    
    shapes[0] = new Circle;
    shapes[1] = new Square;
    shapes[2] = new Triangle;
   
    for (int i = 0; i < sizeof(shapes) / sizeof(shapes[0]); i++) {
        shapes[i]->draw();
    }

    return 0;
}
