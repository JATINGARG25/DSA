#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){

    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){

    int arr2[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    printSum(arr2, 3, 4);
}