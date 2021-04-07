#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *ptr = &x;

    void* ptr2 = ptr;

//    int *ptr3 = ptr2;

    cout << typeid(new float(0.0F)).name() << endl;



    return 0;
}
