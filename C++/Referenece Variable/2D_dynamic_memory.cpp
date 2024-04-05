#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int** arr = new int* [n];         // 2D Array
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }
    return 0;
}