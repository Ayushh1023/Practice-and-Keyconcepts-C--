#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void scale_number(int &num){ // important part
    if(num>100){
        num = 100;
    }
}

int main()
{
    int number {1000};
    scale_number(number);

    cout << number << endl;

    return 0;
}