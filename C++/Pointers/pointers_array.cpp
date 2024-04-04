#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,4,6,78};

    // Below two lines means the same thing ->
    cout << "Address of first memory block is: " << arr << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;

    // printing address of every block ->
    // for(int i = 0; i<10; i++){
    //     cout << "Address of block is: " << &arr[i] << endl;
    // }

    cout << "Value at first location: " << *arr << endl;

    // Pointer
    int *ptr = arr;
    cout << "Value at first location: " << *ptr <<endl; 
    return 0;
}