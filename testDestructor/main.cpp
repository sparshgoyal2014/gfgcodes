#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << " This is Animal Class constructor" << endl;
    }

private:

    ~Animal(){
        cout << "This is Animal Class Destructor" << endl;
    }
};

int main() {

    Animal* animal = new Animal();

    delete animal;

    return 0;
}
