#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void swap(int &a, int &b){
    int temp{a};
    a = b;
    b = temp;
}

int main()
{
    int a{20}, b{30};
    cout << a << " " <<  b << endl;
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}