#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}