#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main() {

    int arr[] = {20,10,5,7};

    sort(arr, arr+4);  // two parametres - first element and beyond the last element.

    for(int i : arr){
        cout << i <<' ';
        cout << sizeof(arr) << " ";
    }

    cout << endl;

    sort(arr, arr+4, greater<int>());

    for(int i : arr){
        cout << i <<' ';
    }

    cout << endl;

    vector<int> vector = {1,5,4,2,3};
    sort(vector.begin(), vector.end(), greater<int>());
    for(int i : vector) {
        cout << i << ' ';
    }

    return 0;
}
