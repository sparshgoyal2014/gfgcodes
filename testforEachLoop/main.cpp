#include <iostream>
using namespace std;
int main() {
//
//    const int arr[] = {1,2,3,4,5};
//
//    int *ptr = arr;
//
//    for(int&& x: arr){
//        cout << x << " ";
//    }cout << endl;
//
//
//
//    for(int x: ptr){
//        cout << x << " ";
//    }cout << endl;
//
//
//    const int x = 5;
//
//    int &y = x;

    int arr[] = {1,2,3,4,5};

    for(int x: arr){
        cout << arr << endl;
    }

    int mat[3][3] = {1,2,3,4,5,6,7,8,9};

    for( int (&arr2)[3] : mat){
        for(int i: arr2){

        }
    }


    int mat3d[3][3][3] = {{1,2,3,4,5,6,7,8,9},{11,22,33,44,55,66,77,88,99},{111,222,333,444,555,666,777,888,999}};

    for(int  (&mat2)[3][3]: mat3d){
        for(int (&arr3)[3]: mat2){
            for(int x: arr3){
                cout << x << " ";
            }cout << endl;
        }cout << endl << endl;
    }

    int (*ptrToArray)[5] = &arr;

    for(int i: *ptrToArray){
        cout << i << " ";
    }cout << endl;

    return 0;
}
