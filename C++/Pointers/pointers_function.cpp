#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

int main(){

    int value = 5;
    int *ptr = &value;

    print(ptr);
}