#include <iostream>
using namespace std;

class First{
public:

    First(){
        heist();
    }

    ~First(){
        heist();
    }

    virtual void heist(){
        cout << "This is Heist Method of FIrst Class" << endl;
    }

    void fun(){
        heist();
    }
};

class Second: public First{

public:
    void heist(){
        cout << "This is heist method of Second Class" << endl;
    }
};

int main() {

    Second second;
    second.fun();


    return 0;
}
