#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

double net_price(double MRP, double discount = 0.25){
    int net_price = MRP * (1-0.25);
    return net_price;
}

int main()
{
    double MRP{};
    cout<<"Enter the MRP of the product::";
    cin>>MRP;
    cout<<"The net discounted price of the product is "<< net_price(MRP) <<endl;

    return 0;
}