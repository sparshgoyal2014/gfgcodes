#include <iostream>
using namespace std;

class Animal{
public:
    void display();

    void test(){
        cout << "This is test method of Animal Class" << endl;
        display();
    }

};


void Animal::display() {
    cout << "This is Display method of Animal Class" << endl;
}

int main() {

    Animal animal;
    animal.test();
    return 0;
}
