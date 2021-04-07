#include <iostream>
using namespace std;


class Animal{
public:
    typedef int i;
    int x = 4;

    string name = "spartsh";

};

int main() {

//    Animal::i number = 54;
//    cout << number << endl;


    Animal *animal = new Animal();
    cout << (*animal).name << endl;

    cout << Animal:: x << endl;
    return 0;
}
