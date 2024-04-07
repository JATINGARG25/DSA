#include<iostream>
using namespace std;

// Reverse counting 
void printCounting(int n){

    if(n == 0){
        return ;
    }
    cout << n << endl;
    printCounting(n-1);
}

int main(){

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    
    printCounting(n);
    return 0;
}