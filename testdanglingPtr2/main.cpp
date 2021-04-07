#include <iostream>
using namespace std;

int* danglingPtrteest(){
    int x = 5;
    int* ptr = &x;
//    return ptr;
    return &x;

}


int main() {

    int*ptr2 = danglingPtrteest();
//
    cout << ptr2 << endl;
//    cout << *ptr2 << endl;
//    cout << *ptr << endl;
//
//    int *ptr;
//
//    {
//        int x = 4;
//        int y = 32;
//        ptr = &x;
//    }
//
//    cout << ptr << endl;
////
//    int *ptr3 = nullptr;
//
//    cout << ptr3 << endl;
//

//    int val = 5;
//    int *ptrToDynamicInt = &val;
//
//    delete ptrToDynamicInt;
//
//    cout << &val << endl;
//    cout << *ptrToDynamicInt << endl;

    return 0;
}
