#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int *arr_ptr{nullptr};
    int size{};

    cout << "How big do you want the array?" << endl;
    cin >> size;

    arr_ptr = new int[size]; // allocating array on heap
    // char *C = new char[3];   // allocating a string on heap

    cout << arr_ptr << endl; // address of first int

    delete[] arr_ptr; // deallocation arrray from heap

    return 0;
}