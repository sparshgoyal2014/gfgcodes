#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main() {

//    int arr[MAX] = {0};
//
//    cout << arr[0] <<endl;

//    int x = 1000000;
//
//    cout << x << endl;

    int*ptr = new int[1000000];

    for(int i=0; i<1000000; i++){
        ptr[i] = 0;
    }


    cout << ptr[100000000];

    vector<int>* ptrVec = new vector<int>[4];

    ptrVec[0].operator[]()


    return 0;
}
