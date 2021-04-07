#include <iostream>
#include <unordered_set>

using namespace std;

bool checkSubArray(int arr[], int size){
    unordered_set<int> set;

    int prefixSum = 0;
    for(int i=0; i<size; i++){
        prefixSum = prefixSum + arr[i];

        if(set.find(prefixSum) != set.end()){
            return true;
        }

        if(prefixSum == 0){
            return true;
        }

        set.insert(prefixSum);
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
