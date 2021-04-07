#include <iostream>
using namespace std;

class Animal{
public:
//    Animal animal = Animal(2);

//    Animal* animal = new Animal();
//

    Animal animal;

    Animal(){
        cout << "This is Animal Class Default Constructor" << endl;
    }

    Animal(int number){
        cout << "This is arguement constructor with number" << number << endl;
    }

};

void display(){
    int number = 5;
    cout << "This is display function" << endl;
    display();
}


class Vehicle{

public:
    int number = 5;

    Vehicle(){
        cout << "This is Vehicle Class constructor" << endl;
    }

    Vehicle(const Vehicle& vehicle){
        cout << "THis is Vehicle class copy constructor" << endl;
    }

};

int main() {

//    Animal animal;
    cout << "hello World" << endl;
    display();


    Vehicle vehicle = Vehicle();


    return 0;
}

//Process finished with exit code -1073741571 (0xC00000FD)
