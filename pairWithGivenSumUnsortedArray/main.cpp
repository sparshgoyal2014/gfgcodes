#include <iostream>
#include <unordered_set>

using namespace std;

bool checkPairSum(int arr[], int size, int sum){
    unordered_set<int> set;

    for(int i=0; i<size; i++){
        if(set.find(sum-arr[i]) != set.end()){
            return true;
        }

        set.insert(arr[i]);
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
