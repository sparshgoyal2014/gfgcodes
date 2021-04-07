#include <iostream>
using namespace std;

void print(int** ptr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << ptr[i][j] << " ";
        }

        cout << endl;
    }
}

// using array of pointers
void print2(int *arr[], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}
int main() {
    int ** ptr;

    int m = 3; int n = 2;
    ptr = new int*[m];  // ptr in stack creating dynamic arrays in heap

    for(int i=0; i<m; i++){
        ptr[i] = new int[n];

        for(int j = 0; j<n; j++){
            ptr[i][j] = i+j;
        }
    }

    // array of pointers
    int *arr[m];  // in stack

    for(int i=0; i<m; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            arr[i][j] = i*j;
        }
    }

    print(ptr, m, n);
    print2(arr, m, n);
    return 0;
}
