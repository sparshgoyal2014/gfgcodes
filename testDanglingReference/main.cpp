#include <iostream>
using namespace std;

int& display(){
    static int x = 1;
    return x;
}



int& display2(){
    int y = 5;
    return y;
}



int main() {

    cout << display() << endl;
    cout << display2() << endl;

    int arr[5] = {1,2,3,4,5};

    int* ptr2 = arr;
    int* &ptr = ptr2;

    const int* const  &ptr3 = (const int*)ptr2;


    int* const  &ptr10 = arr;



    int x = 5;
    const int &y = x;

    int* const  &ptr4 = &x;

    int*  const &ptr5 = arr;

    const int* ptr6 = &x;

    int* ptr8 = &x;

    const int*const &ptr7 = (const int*)ptr8;

    const int &ref = (const int)x;

    const int val = 5;

    int &ref2 = 5;

    int &ref3 = val;

    int * &refPre = val;

    return 0;
}
