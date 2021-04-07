#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

//    int *p = &arr;
//
    const int arr2[5] = {1,2,3,4,5};
//
//    arr2[2] = 5;
//
    int *ptr2 = arr2;
//
//    int arr3[5] = arr;

//    int *ptr3 = arr;
//
//    arr = ptr3;


// This Test is not related to array decay
    int arr3[10] = {1};

    int b;
    int (c);
    int a = (b = (c = 4)) ;

    int d = (5);

    int arr4[5] = ({1,2,3,4,5});

    int e = {1,2,3,4,5;};

    return 0;
}
