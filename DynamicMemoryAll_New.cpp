#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;      // allocate an integer on heap
    int *int_ptr = new int; // you can allocate like this too !

    cout << int_ptr << endl;  // gives an address
    cout << *int_ptr << endl; // garbage value

    *int_ptr = 100;
    cout << *int_ptr << endl; // 100

    delete int_ptr; // frees the allocated space

    cout << *int_ptr << endl; // same garbage value

    return 0;
}