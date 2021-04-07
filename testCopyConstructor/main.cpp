#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "This is Animal Classs Constructor" << endl;
    }

    Animal(Animal &animal){
        cout << "This is 1 arguement copy constructor" << endl;

    }

    Animal(int number){
        cout << "THis is a constructor with int arguement" << endl;
    }


    Animal(Animal animal, Animal animal1){
        cout << "THis is Copy constructor  of Animal Class" << endl;
    }

//    Animal(Animal* animal){
//        cout << "copy constructor using pointers" << endl;
//    }

//
//    void operator=(Animal animal){
//        cout << "This is assgnment operator overloading" << endl;
//    }

    void operator=(int n){
        cout << "hello " << endl;
    }

};

int main() {

    Animal animal;
    Animal animal1;
    Animal animal2(animal, animal1);

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    Animal animal3 = Animal();

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


    animal = 2;

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


    return 0;
}
