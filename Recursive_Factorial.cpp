#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

unsigned long long factorial (unsigned long long n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    cout << factorial(30) << endl;

    return 0;
}