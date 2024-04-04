#include<iostream>
using namespace std;

int main(){

    int num = 5.2;
    cout << num << endl;

    // how to find out the address of a variable -- by using address of operator (&)

    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;
    cout << "Value of pointer is :" << *ptr << endl;
    cout << "Value of pointer is :" << ptr << endl;

    cout << "Size of pointer is :" << sizeof(ptr) << endl;


    return 0;
}