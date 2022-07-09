#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    // // Declaration and Initialization

    // string s1;
    // string s2 {"Ayush"};
    // string s3 {s2};
    // string s4 {"Hardik", 3};
    // string s5 {s3,0,2};
    // string s6 (4, 'X');

    // std::cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl << s6 << endl;

    // // Arithmetic Operators used in Strings

    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};

    cout<<boolalpha;

    cout << (s1==s5) << endl;
    cout << (s1==s2) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 < s2) << endl;
    cout << (s2 > s1) << endl;
    cout << (s4 < s5) << endl;
    cout << (s1 == "Apple") << endl;

    // // string_name.find(search_string) -- returns the index of the first character

    // string s1{"This is a test"};

    // cout << s1.find("This") << endl;
    // cout << s1.find("is") << endl;
    // cout << s1.find("a") << endl;
    // cout << s1.find("test") << endl;
    // cout << s1.find("z") << endl;

    // // s1.clear(); and s1.erase(first_index, last_index)
    // string s1 {"THis is a test"};
    // cout<<s1.erase(0,5);





    return 0;
}