#include <iostream>
using namespace std;

int maxSum(int arr[], int size, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    int currentMax = sum;

    for(int i = k; i<size; i++){
        sum += (arr[k]+arr[i-k]);
        currentMax = max(currentMax, sum);
    }

    return currentMax;
}

bool checkIfSumIsPresent(int* arr, int size, int sum){
    int currentSum = 0;
    int count = 0;

    for(int i=0; i<size; i++){

        currentSum += arr[i];
        count++;
        if(currentSum == sum){
            return true;
        }else if(currentSum > sum){
            currentSum = currentSum - arr[i-count-1];
            count--;
        }
    }

    return false;


}


int main() {
    std::cout << "Hello, World!" << std::endl;
    const int arr[] = {1,2,3,4,5};
    int* ptr = arr;


    char str[] = "abcde";
    char* ptr2 = str;

    const int a = 5;
    int * const ptr3 = &a;

    char* ptr4 = "acfs";

    int* pointer2 = &25;
    return 0;
}
