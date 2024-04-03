#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    // 2D Array
    int arr[3][3];

    // Taking input -- row wise input
    cout << "Enter values of array: " << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    // Printing the 2D Array
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Initializing of 2D-Array
    int arr2[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    // Searching of an element
    cout << "Enter the element to search: " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout << "Element Found!" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
}