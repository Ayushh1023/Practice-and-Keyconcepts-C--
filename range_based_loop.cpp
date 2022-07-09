#include <iostream>
using namespace std;

int main()
{
    int scores[] = {12,34,56,23,57,50};
    int sum{0};
    for(auto score: scores){
        sum +=score;
    }

    cout << sum << endl;

    return 0;
}