#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remaining = search(arr-1, size-1, key);
        return remaining;
    }
}

int main(){

    int arr[8] = {1,2,3,4,5,8,7,6};
    int size = 8;
    int key = 2;
    bool ans = search(arr, size, key);
    cout << ans;
    return 0;
}