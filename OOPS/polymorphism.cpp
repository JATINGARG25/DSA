#include<iostream>
using namespace std;

class A{

    public:

    void sayhello(){
        cout << "Hello jatin garg" << endl;
    }

    void sayhello(string name){
        cout << "Hello " << name << endl;
    }

};

int main(){

    A object1;
    object1.sayhello("mitr");
    object1.sayhello();
    return 0;
}