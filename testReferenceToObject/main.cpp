#include <iostream>
using namespace std;

class Animal{
public:
    string name;
    int number;

    Animal(){}

    Animal(string name, int number){
        this->name = name;
        this->number = number;
    }
};

int main() {

//    Animal& animal = Animal();
//
//    int &x = 4;

    int arr[] = {4,5,6};
    int *ptr = arr;

    int arr2[] = {4,5,8};

    (arr) = ptr;

    (arr)= arr2;

    return 0;
}
