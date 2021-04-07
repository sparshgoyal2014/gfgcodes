#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "THis is Animal Class Constructor" << endl;
    }

    ~Animal(){
        cout << "This is Animal Class Destructor" << endl;
    }

};

int main() {

    int i=0;

    for(Animal animal; i<5; i++){
        Animal animal1;
        cout << i << endl;
    }

    {
        int i = 3;
    }


    for(cout << "hello" << endl, cout << " another Hello!" << endl;i< 12 ;i++) {
        cout << "H" << endl;
    }


    cout << "outer hello World" << endl, cout << "Hi" << endl;

    (cout << "HelloWorld2!" << endl);




    return 0;
}
