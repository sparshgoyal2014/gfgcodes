#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal{
public:

    string name = "Animal Class";

    Animal(){
        cout << "This is Default Animal class constructor" << endl;
    }

    Animal(string name){
        this->name = name;
    }
//
    Animal(Animal &animal){

    }




    Animal& operator=(Animal animal){
        cout << "This is operator = called" << endl;
    }
};

int main() {

    Animal animal("Animal one");

    Animal animal1("new Animal");

    animal1 = animal;

    animal1.operator=(animal);

    cout << animal1.name << endl;

    Animal animal2(animal1);




    return 0;
}
