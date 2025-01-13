/*Define a base class Shape and its derived classes as Circle and
Rectangle. In the main() function, define an array of pointers to the
Shape class. In this array, store the addresses of some Circle and
Rectangle objects. Now, using this array at runtime, determine
whether the pointers in the array point to Circle or Rectangle objects
(i.e., identify the type at the runtime using typeid() and
dynamic_cast). */

#include <iostream>
#include <typeinfo>
using namespace std;

class Shape {
public:
    virtual void display() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void display() const override {
        cout << "This is a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() const override {
        cout << "This is a Rectangle" << endl;
    }
};

int main() {
    Shape* shapes[4];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Circle();
    shapes[3] = new Rectangle();

    for (int i = 0; i < 4; ++i) {
        if (dynamic_cast<Circle*>(shapes[i])) {
            cout << "Object " << i + 1 << " is of type: " << typeid(*shapes[i]).name() << endl;
            shapes[i]->display();
        } else if (dynamic_cast<Rectangle*>(shapes[i])) {
            cout << "Object " << i + 1 << " is of type: " << typeid(*shapes[i]).name() << endl;
            shapes[i]->display();
        }
    }

    for (int i = 0; i < 4; ++i) {
        delete shapes[i];
    }

    return 0;
}
