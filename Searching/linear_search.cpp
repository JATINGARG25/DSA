#include<iostream>
using namespace std;

bool search(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            return true;
        }
    }
    return false;
}

int main(){
    
    int arr[10] = {5, 7, -2, 10, 22, 33, 67, 0, 23, 1};

    cout << "Enter the element you need to search for:" << endl;
    int element;
    cin >> element;

    bool found = search(arr, 10, element);

    if(found){
        cout << "Element is present." << endl;
    }
    else{
        cout << "Element is not present." << endl;
    }

}