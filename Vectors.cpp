#include <iostream>
#include <vector>
using namespace std;

int main()
{

     vector<char> symbols;
     vector<int> scores(5);
     vector<int> marks{1, 2, 3, 4, 5};
     vector<char> alphabets{'a', 'b', 'c', 'd', 'e'};
     vector<double> temp{10, 98.56};

    //  accessing the elements of a vector
     for (int i = 0; i < 5; i++)
     {
        cout << scores.at(i);
     }

     

     //adding elements using push_back
     marks.push_back(90);
     for (int i = 0; i < marks.size(); i++)
     {
         cout << marks.at(i) <<" ";
     }


}