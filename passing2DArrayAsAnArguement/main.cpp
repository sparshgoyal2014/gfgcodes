#include <iostream>
using namespace std;

void print2DArray(int arr[3][2]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void print2(int arr[][2], int m){  // this function will work for any number of rows with 2 columns
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void print3(int (*ptrToArrayOf2Integers)[2], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cout << ptrToArrayOf2Integers[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {
    int arr[3][2] = {1, 2, 3, 4, 5, 6};

    print2DArray(arr);
    cout << "=============================================" << endl;
    print2(arr, 3);
    cout << "=============================================" << endl;
    print3(arr, 3);
    return 0;
}
