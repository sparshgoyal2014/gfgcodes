#include <iostream>
#include <unordered_set>

using namespace std;

bool checkSubArray(int arr[], int size, int sum){
    unordered_set<int> set;

    int preSum = 0;
    for(int i=0; i<size; i++){
        preSum += arr[i];

        if(preSum == sum){
            return true;
        }

        if(set.find(preSum - sum) != set.end()){
            return true;
        }

        set.insert(preSum);
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
