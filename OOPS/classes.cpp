#include<iostream>
using namespace std;

class Hero{

public:
    char name[100];
    int health;
    char level;
};

int main(){

    // creation of object
    Hero h1;
    h1.health = 70;
    h1.level = 'A';

    cout << "Size of " << sizeof(h1) << endl;

    // access properties ->
    cout << "Name is " << h1.name << endl;
    cout << "Name is " << h1.health << endl;
    cout << "Name is " << h1.level << endl;

    return 0;
}