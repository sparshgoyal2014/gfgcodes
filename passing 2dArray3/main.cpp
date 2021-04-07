#include <iostream>
#include<vector>
using namespace std;

//array of vectors
void print(vector<int> arr[], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

//vector of vectors
void print2(vector<vector<int>> &arr){  // we use the reference because "copying the ehole vector object can be costly";
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}


int main() {
    int m = 3;int n = 2;
    vector<int> arr[m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i].push_back(i+2*j);
        }
    }

    vector<vector<int>> arr2;

    for(int i=0; i<m; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            v.push_back(i+j*3);
        }
        arr2.push_back(v);
    }

    print(arr, m);
    cout << "=============================================" << endl;
    print2(arr2);
    return 0;
}
