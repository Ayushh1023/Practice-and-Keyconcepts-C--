#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;
int double_data(int *int_ptr);
int double_data(int *int_ptr)
{
    *int_ptr *=2;
    return *int_ptr;
}

int main()
{
    int test_int = 2;
    int *test_ptr = &test_int;
    
    cout << double_data(test_ptr) << "\n";
    return 0;
}