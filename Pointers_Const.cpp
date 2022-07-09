#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int high_temp{100};
    int low_temp{37};

    cout << "Initial value is " << high_temp << endl;
    const int *ptr = &high_temp; 
    // int *ptr = &high_temp;

    // *ptr = 80;    // ERROR : can't change the value it points to !!!
    ptr = &low_temp; // but we can point it somewhere else

    cout << "Final value " << *ptr << endl;

    int *const score_ptr {&high_temp}; 
    // ☝️ here, we can change the pointing value but can't make the pointer point somewhere else...
    //....it's fixed

    return 0;
}