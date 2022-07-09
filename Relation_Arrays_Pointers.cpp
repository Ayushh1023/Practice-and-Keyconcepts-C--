#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int scores[]{100, 97, 95};
    cout << scores << endl;
    cout << *scores << endl;

    int *score_ptr{scores};

    cout << score_ptr << endl;    // address to which it is pointing (the first element of the array)
    cout << score_ptr[1] << endl; // smae notation as in arrays
    score_ptr++;                  // pointer arithmetic (incrementing/shifting the pointer by 1)
    score_ptr++;

    cout << "after incrementing the ptr by 2....\n" << *score_ptr << endl; // prints the second element (due to shift by 1)

    return 0;
}