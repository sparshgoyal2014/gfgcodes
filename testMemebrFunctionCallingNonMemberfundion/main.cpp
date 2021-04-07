#include <iostream>
using namespace std;

void nonMember(string name){
    cout << "This is Non member function " << endl;
    cout << name << endl;
}

class Animal{
private:
    string name = "Animal Class";

public:
    void display(){
        nonMember(name);
    }
};

int main() {
    Animal animal;
    animal.display();

    int* x = new int ;


    return 0;
}
