#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "This is Animal Class Consrtructor" << endl;
    }

    Animal(Animal &animal){
        cout << "This is copy constructor" << endl;
    }

    Animal& operator=(Animal animal){
        cout << "THis is assignment operator overloaded" << endl;
        return animal;
    }


};

int main() {

    Animal animal;

    cout << "==================================" << endl;
    Animal animal1 = animal;
    cout << "==================================" << endl;

    Animal animal2;

    animal2 = animal;


    cout << "programme about to end " << endl;

    return 0;
}
