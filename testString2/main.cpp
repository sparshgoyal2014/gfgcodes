#include <iostream>
using namespace std;

#include <cli   >
class Animal{
public:
    Animal(){
        cout << "This is Animal class constructor" << endl;
    }
};

int main() {

    string str = "hello";

    str[0] = 'a';
    cout << str << endl;

    cout << "spartsh"[1] << endl;


    const string str2 = "world";

    str2[1] = 't';


    Animal animal = Animal();

    cout << &animal << endl;

    cout << &Animal() << endl;



    return 0;
}
