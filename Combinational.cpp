#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;
int addition(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    // int a = 12;
    // int b = 45;
    // double d;
    // cout << sizeof(a) << endl;
    // int arr[23];
    // cout << sizeof(arr) << endl;
    // float c;
    // cout << sizeof(c) << endl;
    // cout << "The size of double is::" << sizeof(d) << endl;
    // cout << addition(a, b) << endl;

    short a{3000};
    short b{10000};
    short product{a * b};

    cout << product << endl;

    return 0;
}