// This program will help to experience template  function

#include <iostream>
using namespace std;

template <typename T>
int concat(T n1, T n2) {
    return n1 + n2;
}

int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Concatenated result: " << concat(a, b) << endl;

    float x, y;
    cout << "Enter two floats: ";
    cin >> x >> y;
    cout << "Concatenated result: " << concat(x, y) << endl;

    return 0;
}