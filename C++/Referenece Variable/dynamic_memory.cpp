#include<iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += *(arr+i);
    }
    return sum;
}

int main(){

    int n;
    cout << "Enter the Value of size of array: ";
    cin >> n;

    int* ptr = new int[n];       //dynamic memory allocation
    for(int i = 0; i < n; i++){
        cin >> *(ptr+i);
    }

    int ans = getSum(ptr, n);
    cout << "Sum is : " << ans << endl;
    return 0;
}