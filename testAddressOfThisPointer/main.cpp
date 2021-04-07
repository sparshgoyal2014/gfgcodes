#include <iostream>
using namespace std;

class Animal{
public:

    void display(){
        cout << this << endl;
        cout << &this << endl;  // this is r-value
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
