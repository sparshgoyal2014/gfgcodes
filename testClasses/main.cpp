#include <iostream>
using namespace std;


class A;

class B{
    A a;
};

class A{
    B b;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
