#include <iostream>
using namespace std;

class Animal{
public:
    string name = "German Shepherd";
    int number = 5;

    Animal(){
        cout << "This is Animal Class constructor" << endl;
    }

    Animal(const Animal &animal){
        cout << "This is copy constructor of Animal Class" << endl;
    }

    void displauy(Animal animal){
        cout << "THis is display method of Animal Class" << endl;
    }




    Animal operator=(Animal animal) {
        cout << "This is operator = overloading method" << endl;

    }

};

Animal animal;

Animal display(){
    cout << "This is display function defined in global scope, Thank you!" << endl;
    return animal;
}


int main() {

    display();

    Animal().operator=(Animal());

    Animal animal1;
    Animal animal2;


    cout << "++++++++++++++++++++++++++++++++++++" << endl;
    animal2.operator=(animal1);

    animal1.displauy(Animal());


    return 0;
}
