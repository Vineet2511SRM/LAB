#include <iostream>
#include <cmath> // For M_PI (π value)
using namespace std;

// Base class: Shape (Abstract Class)
class Shape {
public:
    // Pure virtual function for area calculation
    virtual double calculateArea() = 0;

    virtual void getData() = 0; // Pure virtual function for getting data

    virtual void printData() = 0; // Pure virtual function for printing data

    // Virtual destructor (important for proper cleanup)
    virtual ~Shape() {}
};

// Derived class: Rectangle (Inherits from Shape)
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Default Constructor
    Rectangle() : length(0), width(0) {}

    // Parameterized Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override function to get data
    void getData() override {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
    }

    // Override area calculation
    double calculateArea() override {
        return length * width;
    }

    // Override print function
    void printData() override {
        cout << "Rectangle:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << " sq. units" << endl;
        cout << "--------------------------" << endl;
    }
};

// Derived class: Circle (Inherits from Shape)
class Circle : public Shape {
private:
    double radius;

public:
    // Default Constructor
    Circle() : radius(0) {}

    // Parameterized Constructor
    Circle(double r) : radius(r) {}

    // Override function to get data
    void getData() override {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    // Override area calculation
    double calculateArea() override {
        return M_PI * radius * radius;
    }

    // Override print function
    void printData() override {
        cout << "Circle:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << " sq. units" << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Rectangle rect(10, 5);
    Circle circ(7);

    // Print data
    rect.printData();
    circ.printData();

    return 0;

}
