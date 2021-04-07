#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

//    for(int x: {1,2,3,4,5}){
//        cout << x << endl;
//    }
//    cout << "===========================================" << endl;



////

    for(initializer_list<int> i: initializer_list<initializer_list<int>>{{1,2,3}, {4,5,6}, {7,8,9}}){
        cout << *i.begin() << endl;
    }

    cout << "********************************************************************************" << endl;


    for(auto x: {initializer_list<int>{1,2,3}, {4,5,6}, {7,8,9}}){


        for(int y: x){
            cout << y << " " ;
        }cout << endl;

    }


//    int a = 1;
//    int b = 2;
//    int c = 3;
//
//    auto&& rref = a;
//
//
//    initializer_list<initializer_list<int>> list = {{1,2,3}, {4,5,6}, {7,8,9}};
//     auto&& x = {{1,2,3}, {4,5,6}, {7,8,9}};
//
//
//
//
//
//
//    for(int &x: {a, b, c}){
//
//    }
//
//    for(int* x: {1,2,3,4}){
//
//    }
//
//
//    for(string &x: {1,2,3}){
//
//    }
//
//    const int num1 = 5;
//
//    int &ref1 = 1;
//
//
//
    const char (*ptr)[6] = &("hello");

    cout << *ptr << endl;
//
//    for(char * const cptr : {"hello", "world", "hi"}){
//
//    }


//    int num1 = 5;
//
//    for(int x: {&num1}){}
//
//
//    int arr[] = {1,2,3,4,5};
//
//    for(string x: {1,2,3,4,5,6}){
//
//    }
//
//    for(int &refi: {1,2,3}){
//
//    }
//
//    int &iref = 5;



//
//
//    int &y = "helloWorld";
//
//    char * cptr = "world";
//
//
//
//    int arr2d[3][3] = {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//
//
//    for(int x[3]: arr2d){
//
//    }
//
//
//    for(auto x: {1,"hello", 1.2}){
//
//    }
//
//    int arr[5] = {1, "hello", 4};
//
//
//    char* ptr = "hello";
//
//    "world" = ptr;
//
//
//    int x = 5;
//    int *iptr = &x;
//
//
//    iptr = "hewllo";
//
//    int arr[5] = {1,2,3,4,5};
//
//    arr = iptr;
//
////
//
//    int num = (int)'a';
//
//    cout << (int)5 << endl;


    return 0;
}
