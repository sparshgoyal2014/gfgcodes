#include <iostream>
using namespace std;

int main() {

     int x = 5;
    void *ptr = &x;

    cout << *((int*)ptr) << endl;


    cout << *new int(5) << endl;

    cout << *new int[6] << endl;

    cout <<(::operator new(5)) << endl;


    int *ptr2 = ptr;

    int *ptr3 = &x;

    void* ptr4 = ptr3;

    return 0;
}
