#include <iostream>
using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;

    int x = 5;

    int* ptr = (void*)(&x);

    void* ptr2 = &x;

    int* ptr3 = &x;

    void** ptr4 = (void**)&ptr3;


    int **ptr5 = &ptr3;

    void** ptr6 = (void**)&ptr5;



    return 0;
}
