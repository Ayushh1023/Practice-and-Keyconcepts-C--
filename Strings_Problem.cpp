// #include <iostream>
// #include <string>
// #include <conio.h>

// using namespace std;

// int main()
// {
//     string input;
//     cout<<"Enter the input string::";
//     getline(cin, input);
//     for(int i = 0; i <= input.length(); i++)
//     {

//     }

//     return 0;
// }
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()

{

    string input{};

    cout << "Enter your string: ";

    getline(cin, input);

    cout << "\n==========PYRAMID==========" << endl
         << endl;

    unsigned int printer{};

    bool nowRev{false}, nowEnd{false};

    for (unsigned int i = 0; i < input.length(); i++) 

    {

        for (unsigned int space = 0; space <= input.length() - i; space++)

            cout << " ";

        

        printer = 0;

        while (!nowEnd) 

        {

            if (!nowRev) 

            { 

                if (printer == i)

                {

                    cout << input.at(printer);

                    nowRev = true;
                }

                else

                    cout << input.at(printer++);
            }

            else

            {

                if (printer == 0)

                    nowEnd = true;

                else

                    cout << input.at(--printer);
            }

        } 

        cout << endl;

        nowEnd = nowRev = false;
    }

    return 0;
}