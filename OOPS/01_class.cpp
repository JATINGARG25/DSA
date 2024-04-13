#include<iostream>
using namespace std;

class Students{

    public:
    string name;
    int marks;

    Students(){
        name = "jatin";
        marks = 81;
    }

};

int main(){

    Students jatin;
    cout << jatin.name << endl;
    return 0;
}