#include <iostream>
using namespace std;

int main() {

    int m = 3; int n = 2;
    int ** arr = new int*[m];  // we have created dynamically array of pointers  // new returns the address of the first element

    // now each element is a pointer which we will point to the dynamically created row.

    for(int i=0; i<m; i++){
        arr[i] = new int[n];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = i+j;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Array of pointers method to create 2-D arrays

    int *arr2[m];  // we have created array of pointers in stack but in pevious we had created array of pointers also dynamically(i.e on heap)

    for(int i=0; i<m; i++){
        arr2[i] = new int[n];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr2[i][j] = i*j;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
