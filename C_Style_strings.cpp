#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int main()
{
    
    char full_name[50];
    char first_name[50];
    char last_name[50];

    // cout<<"Enter your first_name\n";
    // cin>> first_name;
    // cout<<"Enter your last_name\n";
    // cin>> last_name;
    
    // // int length = strlen(first_name);  // for string length
    // // cout << length;

    // cout<<"your fist_name is::"<<first_name<<endl;
    // cout<<"your last_name is::"<<last_name<<endl;
    


    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);


    // cout<<"your full names is " << full_name <<endl;


    cout<<"Enter your full name(along with spaces)::";
    cin.getline(full_name, 50);
    cout<<full_name;


    return 0;
}