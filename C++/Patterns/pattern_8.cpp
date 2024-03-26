#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        // int val = i;
        while (j <= i)
        {
            // cout << val;
            cout<<i+j-1;
            // val++;
            j++;
        }
        cout << endl;
        i++;
    }
}