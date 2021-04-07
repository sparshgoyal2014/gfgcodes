#include <iostream>
#include <unordered_map>

using namespace std;

void countFrequencies(int arr[], int size){

    unordered_map<int, int> map;

    for(int i=0; i<size; i++){
        map[arr[i]]++;
    }

    for(auto x : map){
        cout << x.first << " " << x.second << endl;
    }

    cout << "============================" << endl;

    for(int i=0; i<size; i++){
        if(map[arr[i]] != -1){
            cout << arr[i] << " " << map[arr[i]] << endl;
            map[arr[i]] = -1;
        }
    }
}

int main() {

    int arr[] = {1,2,1,1,3,4,5,5,5,6,7};

    countFrequencies(arr, 11);

    return 0;
}
