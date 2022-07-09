#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;



int main()
{
    vector <string> names {"Shashank", "Shrey", "Ayush"};
    vector <string> *name_ptr{&names};

    cout<<"First name in the list is " << (*name_ptr).at(0)<<endl;

    for(auto elements: *name_ptr){
        cout<< elements << "\n";
    }

    return 0;
}