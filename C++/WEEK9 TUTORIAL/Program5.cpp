#include <iostream>
#include <stdexcept>
using namespace std;

// RAII Cleanup class
class Cleanup {
public:
    ~Cleanup() {
        cout << "Cleanup done." << endl;
    }
};

// Function that throws an exception
void doWork() {
    Cleanup cleanup; // destructor will always run
    cout << "Doing some work..." << endl;

    // Simulate an error
    throw runtime_error("Something went wrong!");
    
    // Even if no error: cout << "Work done." << endl;
}

int main() {
    try {
        doWork();
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
