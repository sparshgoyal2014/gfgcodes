#include <iostream>
using namespace std;
//
//
//class Animal{
//public:
//    virtual void display(){
//        cout << "this is Animal Class display mthod" << endl;
//    }
//};
//
//
//class Dog : public Animal{
//public:
//    void display(){
//        cout << "this is dog class display method" << endl;
//    }
//};
//


class Weapon{
public:
    Weapon(){
//        cout << "This is Weapon Class Feautres" << endl;
    }

    void display(){
        cout << "This is display method of weapon Class" << endl;
    }
};

class Bomb : public Weapon{
public:
    void display() {
        Weapon:: display();
        cout << "this is display method of Bomb Class" << endl;
    }
};

class Gun: public Weapon{
public:
    void display(){
        Weapon:: display();
        cout << "This is display method of Gin Class" << endl;
    }
};

class Loader{
public:
    void loadDisplays(Weapon* weapon){
        weapon->display();
    }
};



int main() {

    Loader* loader = new Loader();
    Weapon* weapon;

    Bomb b;
    Gun g;

    weapon = &b;
    loader->loadDisplays(weapon);

    weapon = &g;
    loader->loadDisplays(weapon);

    cout << 2;

    cout.operator<<(3);

    return 0;
}
