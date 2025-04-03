#include <iostream>
#include <cmath> // For M_PI (π value)
using namespace std;

// Base class: Shape (Abstract Class)
class Shape {
public:
    // Pure virtual function for area calculation
    virtual double calculateArea() = 0;

    // Virtual function to display details
    virtual void displayData() = 0;

    // Virtual destructor (important for proper cleanup)
    virtual ~Shape() {}
};

// Derived class: Rectangle (Inherits from Shape)
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor to initialize dimensions
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area calculation
    double calculateArea() override {
        return length * width;
    }

    // Override display function
    void displayData() override {
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
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override area calculation
    double calculateArea() override {
        return M_PI * radius * radius;
    }

    // Override display function
    void displayData() override {
        cout << "Circle:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << " sq. units" << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Creating objects of Rectangle and Circle
    Rectangle rect(10, 5);
    Circle circ(7);

    // Display details
    rect.displayData();
    circ.displayData();

    return 0;
}
