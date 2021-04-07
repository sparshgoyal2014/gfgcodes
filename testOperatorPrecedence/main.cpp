#include <iostream>
using namespace std;

int a(){
    cout << "This is a" << endl;
    return 1;
}

int b(){
    cout << "This is b" << endl;
    return 2;
}

int c(){
    cout << "This is c" << endl;
    return 3;
}


int main() {
//    cout << "Hello World!" << endl;
//    cout << "Yeah! Hello World." << endl;
    int x = a() + (b() * c());
    cout << x << endl;

    int (*arr)[5] = new int[5][5];


    return 0;
}
