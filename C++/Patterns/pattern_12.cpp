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
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}