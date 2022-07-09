#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl; // returns 100

    *score_ptr = 200;
    cout << *score_ptr << endl; //returns 200
    cout << score << endl; //changed value of score to 200 automatically !!!

    cout<< "It's Magic! It's Magic!" << endl;

    return 0;
}