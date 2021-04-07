#include <iostream>
#include <unordered_set>

using namespace std;

int countDistinct(int arr[], int size){
    unordered_set<int> set;

    for(int i=0; i<size; i++){
        set.insert(arr[i]);
    }

    return set.size();
}

int test(int (& arr)[5]){
    cout << arr[2] << endl;
}

int main() {

    int arr[5] = {1,2,3,4,5};

    int (& ref)[5] = arr;

    cout << ref[0] << endl;

    test(arr);
    return 0;
}
