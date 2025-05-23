#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Overload << operator as a friend function
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    cout << c1;  // Expected Output: 3 + 4i
    return 0;
} 