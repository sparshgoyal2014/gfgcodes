#include <iostream>
using namespace std;


int main() {

    int arr[5] = {1,2,3,4,5};

    for(int * ptr = arr; ptr < arr+5; ptr++){
        cout << *ptr << endl;
    }

    cout << "==================" << endl;
    cout << **&arr << endl;
    cout << &arr + 1 << endl;
    cout << arr +1  << endl;


    int (*ptrToArray)[5] = &(&arr)[0];

    int mdArray[3][3] = {1,2,3,4,5,6,7,8,9};


    cout << "==================" << endl;

    for(int* i: mdArray){
        cout << *i << endl;
    }

    int (*ptrToArray2)[3] = mdArray;

    int *ptrTOSingleELement = *mdArray;
    ptrTOSingleELement = *ptrToArray2;


    cout << "==================" << endl;

    for( int (&i)[3] : mdArray){
        for(int x : i){
            cout << x << " ";
        }
    }

    for(int *  const &ptr : mdArray){

    }

    int arr2[5] = {1,2,3,4,5};

    int *ptr = arr;

    int * const & ptr2 = arr;


    int x = 5;

    int *pt = &x;

    int * &refPt = &x;

    arr2 = pt;



    return 0;
}
