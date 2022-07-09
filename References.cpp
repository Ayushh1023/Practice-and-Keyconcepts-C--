#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> names{"Shashank", "Ayush", "Shrey"};

    for (auto &str : names)
    {
        cout << str << endl;
    }

    for (auto &str : names)
    {
        str = "Astra";
        cout << str << endl;
    }

    return 0;
}