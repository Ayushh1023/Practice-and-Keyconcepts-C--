#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for (auto x : v)
    {
        cout << x << "\n";
    }
}

int main()
{
    vector<int> data{1, 2, 3, 4, 5};
    print(data);

    return 0;
}