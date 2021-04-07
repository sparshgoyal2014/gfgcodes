#include <iostream>
#include <unordered_map>

using namespace std;

void countDistinct(int arr[], int size, int k){
    unordered_map<int, int> map;

    for(int i=0; i<k; i++){
        map[arr[i]]++;
    }
    cout << map.size() << " ";

    for(int i=k; i<size; i++){
        map[arr[i-k]]--;

        if(map[arr[i-k]] == 0){
            map.erase(arr[i-k]);
        }

        map[arr[i]]++;

        cout << map.size() << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {10,20,20,10,30,40,10};

    countDistinct(arr, 7, 4);
    return 0;
}
