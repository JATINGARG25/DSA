#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 0){
        return 1;
    }

    /*int small = factorial(n-1);
    int big = n * small;

    return big;*/
    
    // OR

    return n * factorial(n-1);
}

int main(){

    int n;
    cout << "Enter the number whose factorial you need to find out : ";
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is " << ans << endl;
    return 0;
}