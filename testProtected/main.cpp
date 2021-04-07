#include <iostream>
using namespace std;

class Base{
protected:
    string name = "This is base Class";
};

class Child : public Base{

};

class GrandChild : public Child{

public:
    void display(){
        cout << name << endl;
    }

};

class GrandChild2 : public GrandChild{

public:
    void display2(){
        cout << name << endl;
    }

};

class GrandChild3 : public GrandChild2{

public:
    void display3(){
        cout << name << endl;
    }

};

int main() {

    GrandChild grandChild;
    grandChild.display();


    GrandChild3 grandChild3;
    grandChild3.display();
    return 0;
}
