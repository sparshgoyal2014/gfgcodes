#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void display(){
        cout << this << endl;
    }

    void passThis(Animal* const this){
        cout << ptr << endl;
    }



//    static void test(){
//        cout << this << endl;    // Invalid use of this outside a non-static member function
//    }
};

int main() {

    cout << this << endl;

    return 0;
}
