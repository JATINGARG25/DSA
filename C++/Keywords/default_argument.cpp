#include<iostream>
using namespace std;

void printArray(int arr[], int n, int start = 0){    // in this default argument is start -- also when we make default then first we made rightmost argument as default argument
    for(int i = start; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[5] = {1, 15, 17, 89, 90};

    printArray(arr,5);  // if we dont pass the default argument then its okk it uses default value -- FINISH.
    return 0;
}