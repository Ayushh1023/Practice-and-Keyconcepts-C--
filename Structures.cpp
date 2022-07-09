#include<iostream>


using namespace std;

struct rectangle{
    int length;
    int breadth;
    int area = length*breadth; 
};

int main(){
    // struct rectangle r1;
    // r1.length = 12;
    // r1.breadth = 13;
    struct rectangle r1 {10,11};
    cout<<"The area of the given rectangle is "<<r1.area<<endl;
    return 0;
}