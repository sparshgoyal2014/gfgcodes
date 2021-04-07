#include <iostream>
#include<vector>

using namespace std;

int main() {
    // Array of vectors;

    int m = 3; int n = 2;

    vector<int> arr[m];   // we are creating m vectors

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){   // we are traversing through every element of arr, and we are pushing n elements to the every element of the array arr;
            arr[i].push_back(j);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }


    // vector of vectors
    vector<vector<int>> arr2;

    for(int i=0; i<m; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            v.push_back(j);
        }

        arr2.push_back(v);
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
