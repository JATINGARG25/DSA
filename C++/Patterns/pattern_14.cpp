#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " ";
            space--;
        }
    
        int j = 1;
        while (j<=i)
        {
            cout << j;
            j++;
        }

        int start = i-1;
        while (start)
        {
            cout<< start;
            start--;
        }
        
        cout << endl;
        i++;
    }
}