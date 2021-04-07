#include <iostream>
using namespace std;


class Animal{
public:

    int number = 5;

    int number2 = this->number;

    Animal(){};

    void display(){
        cout << "This is display method of ANimal Class" << endl;
//        cout << &this << endl;

        this = new Animal();

        5 = 4;

    }
};

void display(Animal* this){


}


int main() {
    std::cout << "Hello, World!" << std::endl;

    const int x = 4;
    cout << &x << endl;


    return 0;
}
