#include <iostream>
using namespace std;

// prototyping, or just put the function you created above the main function
void printName(string name);


int main(){
    string name;
    cout << "enter your name: ";
    cin >> name;
    printName(name);
        return 0;
}

// function creation
void printName(string name){
    cout << "you name is " << name;
}