#include<iostream>
using namespace std;

int main(){

    // Integer array
    int arr[3] = {5,7,11};

    // character array
    char ch[5] = {'j','a','t','i','n'};

    // Initializing the array with one
    int one[100];
    fill_n(one,100,1);

    for(int i = 0; i<100; i++){
        cout << one[i];
    }
}