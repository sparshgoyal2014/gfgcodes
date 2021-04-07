#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[5] = {1,2,3,4,5};


int (&returnArray())[5]{  // returning refernce to array
    int localArr[3] = {1,2,3};

    return arr;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;

    cout << returnArray() << endl;

    int (&arr2)[5] = returnArray();


    returnArray()[0] = 6;

    for(auto x: arr2){
        cout << x << " ";
    }cout << endl;

    int arr3[3][3] = {1,2,3,4,5,6,7,8,9};

    for(auto* x: arr3){
        for(int i=0; i< sizeof(arr3[i])/ sizeof(int); i++){
            cout << x[i] << endl;
        }
    }





    return 0;
}
