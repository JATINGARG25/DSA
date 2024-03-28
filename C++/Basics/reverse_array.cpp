#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[5] = {2,5,87,8,7};

    reverse(arr,5); // scope of array is global bcoz it gives its address to the function not the value; 
    printArray(arr,5);
}