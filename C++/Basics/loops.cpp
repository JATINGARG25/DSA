#include<iostream>
using namespace std;

int main(){

    // int n = 10;
    // int i = 1;

    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }

    int i = 2;
    int sum = 0;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    while(i<=n){
        sum += i;
        i += 2;
    }
    cout<<sum;
}