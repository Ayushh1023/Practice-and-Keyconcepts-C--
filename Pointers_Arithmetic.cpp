#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string name1{"Ayush"};
    string name2{"Shashank"};
    string name3{"Ayush"};

    string *p1, *p2, *p3;
    p1 = &name1;
    p2 = &name2;
    p3 = &name3;
    string *p4 = &name1;
    cout << p1 << "==" << p4 << endl;
    cout << (*p1 == *p4) << endl; // true
    return 0;
}