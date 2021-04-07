#include <iostream>
using namespace std;

bool pairSum(int arr[], int left, int size, int sum){
    int right = size-1;

    while(left < right){
        if(arr[left] + arr[right] == sum){
            return true;
        }

        if(arr[left] + arr[right] > sum){
            right--;
        }else{
            left++;
        }
    }

    return false;
}

bool trippleSum(int arr[], int left, int size, int sum){
    for(int i=0; i<size; i++){
        if(pairSum(arr, i+1, size, sum - arr[i])){
            return true;
        }
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
