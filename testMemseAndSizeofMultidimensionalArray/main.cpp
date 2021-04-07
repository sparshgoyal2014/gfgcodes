#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


    int arr[3][3];

    cout << sizeof(arr)/ sizeof(int) << endl;


    memset(arr, -1, sizeof(arr));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

//    int ** arr2 = new int*[3];
//
//    for(int i=0; i<3; i++){
//        arr2[i] = new int[3];
//    }

    int (*arr2)[3] = new int[3][3];

    cout << "======================" << endl;
    memset(&arr2[0][0], -1, 36);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr2[i][j] << " ";
        }cout << endl;
    }

//
//    sort(arr, arr + 5, greater<int>());
//
//    greater<int> g = greater<int>();
//
//    vector<int> vec(5);
//    void*ptr = vec.begin();

    int *ptr2 = new int[5];
    for(int i=0; i<5; i++){
        ptr2[i] = 0;
    }

    cout << sizeof(ptr2) << " " << sizeof(*ptr2) << " " << endl;



    return 0;
}
