#include<iostream>
using namespace std;

// Power of 2 ->
int power(int n){

    if(n == 0){
        return 1;
    }

    return 2 * power(n-1);
}

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = power(n);

    cout << "2 Power " << n << " is " << ans << endl;
    return 0;
}