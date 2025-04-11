#include <iostream>
using namespace std;

// Template class definition
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    // Constructor
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    // Integer Calculator
    Calculator<int> intCalc(10, 5);
    cout << "Integer Operations:" << endl;
    cout << "Add: " << intCalc.add() << endl;
    cout << "Subtract: " << intCalc.subtract() << endl;
    cout << "Multiply: " << intCalc.multiply() << endl;
    cout << "Divide: " << intCalc.divide() << endl;

    cout << endl;

    // Float Calculator
    Calculator<float> floatCalc(10.5, 3.2);
    cout << "Float Operations:" << endl;
    cout << "Add: " << floatCalc.add() << endl;
    cout << "Subtract: " << floatCalc.subtract() << endl;
    cout << "Multiply: " << floatCalc.multiply() << endl;
    cout << "Divide: " << floatCalc.divide() << endl;

    return 0;
}
