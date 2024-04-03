#include<iostream>
using namespace std;

// calculate the length of the string
int getLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count ++;
    }
    return count;
}

// reverse of a string
void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){

    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Your name is " << name << "." << endl;

    cout << "Length of the string is: " << getLength(name) << endl;

    reverse(name, getLength(name)); 
    cout << "Reverse of the string -- " << name << endl;
}