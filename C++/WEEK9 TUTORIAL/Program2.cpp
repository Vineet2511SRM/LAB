#include <iostream>
#include <stdexcept>
using namespace std;

void validatePositive(int num) {
    if (num <= 0) {
        throw runtime_error("Error: Number must be positive.");
    }
}

void validateEven(int num) {
    if (num % 2 != 0) {
        throw runtime_error("Error: Number must be even.");
    }
}

void validateRange(int num) {
    if (num < 1 || num > 100) {
        throw runtime_error("Error: Number must be between 1 and 100.");
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        validatePositive(number);
        validateEven(number);
        validateRange(number);
        cout << "Number is valid!" << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}