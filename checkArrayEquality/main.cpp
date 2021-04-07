#include <iostream>
#include <unordered_set>

using namespace std;

int checkEqual(int arr1[], int arr2[], int size){
    unordered_set<int> set;

    for(int i=0; i<size; i++){
        set.insert(arr1[i]);
    }

    int size1 = set.size();

    for(int i=0; i<size; i++){
        set.insert(arr2[i]);
    }

    if(size1 == set.size()){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    //code
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;

        int arr1[size], arr2[size];

        for(int i=0; i<size; i++){
            cin >> arr1[i];
        }


        for(int i=0; i<size; i++){
            cin >> arr2[i];
        }

        cout << checkEqual << endl;
    }
    return 0;
}