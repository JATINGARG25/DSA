#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int* ptr = &i;
    
    int** ptr2 = &ptr; // declaration of double pointer

    cout << **ptr2 << endl;

    return 0;
}