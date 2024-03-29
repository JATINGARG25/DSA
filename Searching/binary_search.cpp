#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int element){

    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == element){
            return mid;
        }

        if(element > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start+end)/2;
        int mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    
    int arr[10] = {1, 5, 7, 34, 57, 67, 68, 89, 98, 99};

    cout << "Enter the element you need to search for:" << endl;
    int element;
    cin >> element;

    int found = binary_search(arr, 10, element);

    cout << "Index of " << element << " is " << found << endl;

}