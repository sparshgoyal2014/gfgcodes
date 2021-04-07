#include <iostream>
using namespace std;

class Animal{
public:

    static int number;


public:

    Animal(int num){
//        number = num;
    }

    void changeNumber(){
//        number++;
    }

};

int Animal:: number ;





int main() {

    Animal animal(1), animal1(2);

    cout << Animal:: number << endl;

    animal.changeNumber();
    animal.changeNumber();
    animal.changeNumber();


    Animal animal2(51);
    cout << Animal:: number << endl;


    int x = 5;
    void *ptr = &x;

    cout << *((int*)ptr) << endl;


    cout << *new int(5) << endl;

    cout << *new int[6] << endl;

    cout <<(::operator new(5)) << endl;


    int *ptr2 = ptr;

    int *ptr3 = &x;

    void* ptr4 = ptr3;


    return 0;
}
