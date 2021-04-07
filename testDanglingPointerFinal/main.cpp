#include <iostream>
using namespace std;


int * foo()
{
    int a = 5;

    int *ptr = &a;
    return ptr;
//    return &a;
}

int main()
{
    int* p = foo();
    std:: cout << p <<std:: endl;

    cout << *p << endl;

    *p = 4;

    cout << *p << endl;

    int val = 3;
    cout << (val = 2) << endl;



    cout << (*p = 14) <<endl;

//    std::cout << *p;
//    *p = 8;
//    std::cout << *p;

    return 0;
}