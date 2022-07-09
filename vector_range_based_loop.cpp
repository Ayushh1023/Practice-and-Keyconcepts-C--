#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> temps {0,1,2,3,4,5,6,7,8};
    int sum{};
    for(auto data : temps){
        sum+=data;
    }

    cout<<"The sum of the elements is : "<<sum<<endl;
    cout<<"The average of elements are: "<<sum/temps.size()<<endl;


    return 0;
}