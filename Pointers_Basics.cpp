#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num{10};
    int *p = &num;
    cout << "value of num " << num << endl;
    cout << "sizeof num is " << sizeof(num) << endl;
    cout << "adress of num is " << &num << endl; // prints the adress of {num}

    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof(p) << endl;

    return 0;
}