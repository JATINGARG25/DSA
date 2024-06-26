#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    int arr[10] = {8,9,0,1,5,3,6,7,2,10};
    selectionSort(arr,10);

    for(int i = 0; i<10; i++){
        cout << arr[i] << " ";
    }
}