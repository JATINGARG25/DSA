#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternate_reverse(int arr[], int size){
    int i = 0;

    while(i+1<size){
        swap(arr[i], arr[i+1]);
        i += 2;
    }
}

int main(){

    int arr[6] = {2,5,87,8,7,90};

    alternate_reverse(arr,6); // scope of array is global bcoz it gives its address to the function not the value; 
    printArray(arr,6);
}