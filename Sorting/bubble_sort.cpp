#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i = 0; i<n-1; i++){
        bool swapped = false;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
}


int main(){

    int arr[10] = {8,9,0,1,5,3,6,7,2,10};
    bubbleSort(arr,10);

    for(int i = 0; i<10; i++){
        cout << arr[i] << " ";
    }
}