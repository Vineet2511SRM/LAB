#include <iostream>
using namespace std;

class Box {
protected:
    double width;  // Now, width is protected

public:
    double length;

    void setWidth(double w) {
        width = w;
    }

    double getWidth() {
        return width;
    }
};

// Derived class
class DerivedBox : public Box {
public:
    void showWidth() {
        cout << "Width accessed in DerivedBox: " << width << endl;  // Allowed because width is protected
    }
};

int main() {
    Box box;
    DerivedBox dBox;

    // Accessing length (public)
    box.length = 10.0;
    cout << "Length of box: " << box.length << endl;

    // Setting and getting width using functions
    box.setWidth(12.5);
    cout << "Width of box using getWidth(): " << box.getWidth() << endl;

    // Accessing width in derived class
    dBox.setWidth(15.0);
    dBox.showWidth();  // Accessing protected member in derived class

    return 0;
}
