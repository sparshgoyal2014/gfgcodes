#include <iostream>
using namespace std;

int display(){
    int x = 5;
    return x;
}

int display2(){
    return 10;
}


class Animal{
public:
    string name = "Animal Class";
    int number;

    Animal(int number){
        this->number = number;
        cout << "This is Animal Class default constructor" << number << endl;
    }
};

//Animal test(){
//    return Animal();
//}


int main() {

//    cout << &display() << endl;
//    cout << &display2() << endl;
//
//    cout << &((int)5.2) << endl;
//
//    cout << &string("k;if") << endl;
//
//    cout << &Animal() << endl;
//
//    cout << &test() << endl;
//
//    Animal animal2 = Animal();
//    Animal() = animal2;
//
//
//
//
//    static_cast<double> (5) = 4;
//
//    const int& refValue = 4;
//    refValue = 4;
//
//    cout << &refValue << endl;
//
//

    Animal animal2 = Animal(10);

    cout << (Animal(5) = animal2).number << endl;

    Animal(4).name = "hello";
    Animal(7).number = 4;

    animal2.number = 4;


    int x = 4;
    (double)x = 1;
    cout << &((double)x) ;



    return 0;
}
