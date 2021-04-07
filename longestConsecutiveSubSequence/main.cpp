#include <iostream>
#include <unordered_set>

using namespace std;

int longestSubSequence(int arr[], int size){
    unordered_set<int> set;

    for(int i=0; i<size; i++){
        set.insert(arr[i]);
    }

    int result = 1;
    for(int i=0; i<size; i++){
        int currentLength = 1;
        if(set.find(arr[i] - 1) == set.end()){
            while(set.find(arr[i]+1) != set.end()){
                currentLength ++;
            }
            result = max(currentLength, result);
        }
    }

    return result;
}

int main() {
    int size = 4;

    int arr[size] = {0};
    return 0;
}
