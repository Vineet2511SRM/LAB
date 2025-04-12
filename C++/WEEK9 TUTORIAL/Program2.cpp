#include <iostream>
#include <stdexcept>
using namespace std;

// Function to check positivity
void checkPositive(int num) {
    if (num <= 0) {
        throw invalid_argument("Error: Number must be positive.");
    }
}

// Function to check even number
void checkEven(int num) {
    if (num % 2 != 0) {
        throw logic_error("Error: Number must be even.");
    }
}

// Function to check range
void checkRange(int num) {
    if (num < 1 || num > 100) {
        throw out_of_range("Error: Number must be between 1 and 100.");
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        // Level 1: Positivity
        checkPositive(number);

        // Level 2: Even check
        checkEven(number);

        // Level 3: Range check
        checkRange(number);

        cout << "✅ Valid number for the scientific calculator!" << endl;

    } catch (const invalid_argument &e) {
        cout << e.what() << endl;
    } catch (const logic_error &e) {
        cout << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    } catch (const exception &e) {
        // Fallback for unexpected exceptions
        cout << "Unexpected error: " << e.what() << endl;
    }

    return 0;
}
