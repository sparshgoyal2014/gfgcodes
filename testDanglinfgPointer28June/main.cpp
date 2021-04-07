#include <iostream>
using namespace std;

int* display(){
    int x = 54;
    return &x;
}

int main() {

    int *ptr = display();

    cout << ptr << endl;

    return 0;
}
