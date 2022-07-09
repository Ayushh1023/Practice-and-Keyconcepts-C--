#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v {23,2,34,56,4,6,9,10};
    sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    // int init = 50;
    int sum = accumulate(v.begin(),v.end(),0);
    // int sum = accumulate(v.begin(),v.end(),init);
    for (int element : v){
        cout << element<< " ";
    }
    cout << "The sum is::" << sum << endl;
}