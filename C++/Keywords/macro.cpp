#include<iostream>
#define j 3.14      // macro created -- it don't take any kind of memory to store. || Also it is not updateable...

using namespace std;

int main(){

    int a = 5;
    double area = j*a*a;

    cout << "Area is : " << area << endl;
    return 0;
}