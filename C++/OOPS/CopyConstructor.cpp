#include<iostream>
using namespace std;

class constOver 
{
    int num1,num2,res;
    public:
    constOver() { cout << "Default Constructor" << endl; } 
    constOver(int a, int b) : num1(a), num2(b) { cout << "Parameterized Constructor" << endl; }
    constOver(constOver &obj) : num1(obj.num1), num2(obj.num2) { cout << "Copy Constructor" << endl; }        
    void display() { cout << "Num1: " << num1 << " Num2: " << num2 << endl; }
};

int main()
{
    constOver();
    constOver obj1(10,20);
    constOver obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}