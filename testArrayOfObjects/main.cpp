#include <iostream>
using namespace std;

class Animal{
public:
    string name = "Animal Class";

    Animal(int number){
        cout << "This is parameterized constructor of Animal Class " << number << endl;
    }

    void display(){
        cout << "this is display method of Animal cLass" << endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Animal arr[5] = {Animal(1), Animal(2), Animal(3), Animal(4), Animal(6)};
    return 0;
}
