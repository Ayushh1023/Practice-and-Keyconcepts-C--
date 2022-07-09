#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &a)
    {
        a.push_back(9000);
        vector<int> count;
        int n = a.size();
        cout << "The size is::" << n << endl;
        sort(a.begin(), a.end());
        for (int integer : a)
        {
            cout << integer << " ";
        }
        cout << endl;
        int occ{1};
        for (int i{0}; i < n - 1; i++)
        {
            cout << "Comparing " << (i) + 1 << " and " << (i + 1) + 1 << "element" << endl;

            if (a[i] == a[i + 1])
            {
                occ++;
            }
            else if (a[i] != a[i + 1] || a[i + 1] == a[n - 2])
            {
                cout << "occ: " << occ << endl;
                count.push_back(occ);
                occ = 1;
            }
        }
        for (int element : count)
        {
            cout << element << " ";
        }
        cout << endl;

        sort(count.begin(), count.end());
        int x = count.size();
        for (int j{0}; j < (x - 1); j++)
        {
            if (count[j] == count[j + 1])
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{

    return 0;
}