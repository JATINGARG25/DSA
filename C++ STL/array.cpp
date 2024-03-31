#include<iostream>
#include<array>

using namespace std;

int main(){

    array<int,5> arr = {1,2,3,4,5};
    int size = arr.size();

    cout << "Size of array is: " << size << endl;
    cout << "First element of the array is: " << arr.front() << endl;
    cout << "Last element of the array is: " << arr.back() << endl;
    cout << "Element at index 2 is: " << arr.at(2) << endl;
}