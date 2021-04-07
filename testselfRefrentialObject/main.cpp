#include <iostream>
using namespace std;

class Animal{
public:

//    Animal* animal = new Animal();

    Animal(){
        cout << "This is Animal Class" << endl;
        Animal* animal2 = new Animal();
    }
};

int main() {

    Animal animal;

    return 0;
}
