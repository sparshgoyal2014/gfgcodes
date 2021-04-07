#include <iostream>
using namespace std;

class Animal{
public:
    string name = "Animal Class";
//    string name2 = name3;
//    string name5 = this->name3;
    string name3 = "Animal Class 3";
    string name4 = name3;
    string name6 = this->name3;


    void display(){
        cout << "This is display method of Animal class" << endl;
        test();
    }

    void test(){
        cout << "This is test method of Animal Class" << endl;
    }
};
int main() {
    Animal animal;

//    cout << animal.name2 << endl;
    cout << animal.name4 << endl;
    return 0;
}
