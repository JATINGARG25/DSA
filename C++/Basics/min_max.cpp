#include<iostream>
using namespace std;

int getmax(int arr[], int size){

    int max = INT32_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[], int size){

    int min = INT32_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int size;
    cout << "Enter Value of Size: " << endl;
    cin >> size;
    int arr[100];

    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Max of the array is: " << getmax(arr,size) << endl;
    cout << "Min of the array is: " << getmin(arr,size) << endl;

}