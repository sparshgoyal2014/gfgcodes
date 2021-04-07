#include <iostream>
using namespace std;

class Dog{

};

class Animal{
public:
    Dog dog = Dog();
    int number = 3;

    string name = "Animal Class";

    void test(Animal animal){

    }

};

class Test{
    int number = 4;
    Test *testobj = new Test();
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
