#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    cout << "RAND_MAX of this system is " << RAND_MAX << endl;
    srand(time(nullptr));

    for(int i = 1; i<=count; i++)
    {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }


    return 0;
}