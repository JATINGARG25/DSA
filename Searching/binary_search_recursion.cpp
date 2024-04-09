#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){

    if(s>e){
        return false;
    }

    int mid = s + (e - s)/2;

    if(arr[mid] == k){
        return true;
    }
    else if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }

    else{
        return binarySearch(arr, s, mid-1, k);
    }

}
int main(){

    int arr[8] = {2,3,6,9,13,23,34,45};
    int s = 0;
    int e = 7;
    int key = 16;

    cout << binarySearch(arr, s, e, key);
    return 0;
}