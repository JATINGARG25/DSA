#include<iostream>
using namespace std;

int setbits(int a){
    int count = 0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    return count;
}
int total_setbits(int a, int b){
    return setbits(a) + setbits(b);
}

int main(){
    cout<<total_setbits(5,2);
}