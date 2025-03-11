#include <iostream>
#include <string>

using namespace std;

class concat {
protected:
    string name;

public:
    concat(string value) { name = value; }

    // Overloaded + operator for concatenation
    string operator+(const concat& temp) {  
        return name + temp.name; 
    }
};

class compare : public concat {
public:
    compare(string value) : concat(value) {}

    // Overloading + for string comparison
    bool operator+(const compare& temp) {
        if (name == temp.name) {
            cout << "Strings are equal." << endl;
            return true;
        } else {
            cout << "Strings are not equal." << endl;
            return false;
        }
    }
};

int main() {
    string val1, val2;
    cout << "Enter two strings: \n";
    cin >> val1 >> val2;

    compare obj1(val1);
    compare obj2(val2);

    obj1 + obj2;  // Using overloaded '+' operator for comparison

    return 0;
}
