#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}

int main()
{
    int num{10};
    int another_num{20};

    cout << "number before calling pass_by_value1:" << num << endl;
    pass_by_value1(num);
    cout << "number after calling pass_by_value1:" << num << endl;

    vector<string> s{"hello"};
    pass_by_value3(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s.at(i) << " ";
    }

    return 0;
}