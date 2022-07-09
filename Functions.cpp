#include <iostream>
#include <random>
#include <string>
using namespace std;
#define PI 3.1415

void area_circle(){
    double radius {};
    double area{};
    cout << "Input the radius:: ";
    cin>>radius;
    area = PI*radius*radius;
    cout << "The area is " << area << endl;

}

int main()
{
    area_circle();


    return 0;
}