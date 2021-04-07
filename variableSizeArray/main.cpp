#include <iostream>
using namespace std;

int main() {

    // Note: c++14 standards allow variable sized arrays, we can have variable in the dimension brackets while initializing the array

    int m = 3;
    int n = 2;

    int arr[m][n];

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

    return 0;
}
