#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main() {

//    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << **arr << endl;

    int arr2[5] = {1,2,3,4,5};

    cout << arr2 << endl;
    cout << &arr2 << endl;

    cout << *arr2 << endl;
    cout << *&arr2 << endl;
    cout << &*arr2 << endl;

//    cout << &(&arr2[0]) << endl;
//    cout << &5 << endl;

    cout << &(*&arr2) << endl;
    cout << "*************" << endl;
    cout << typeid(*&arr2).name() << endl;
    cout << "*************" << endl;

    //    cout << &(&*arr2) << endl;


    cout << **&arr2 << endl;
    cout << *&*arr2 << endl;

    cout << *((int*)0x61fecc) << endl;

    char str[] = "abc";
    cout << &(*str) << endl;
    cout << *(&str) << endl;
    cout << *str << endl;
    cout << &str << endl;

    cout << *((int*)0x61fec8) << endl;
    cout << *((char*)0x61fec8) << endl;
    cout << *((double*)0x61fec8) << endl;

//    cout << &(&arr) << endl;



    return 0;
}
