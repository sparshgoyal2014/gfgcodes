#include <iostream>
using namespace std;

bool isSunSub(int arr[], int size, int sum){
    int currentsum = arr[0];int start = 0;

    for(int end = 1; end < size; end++){
        while(currentsum > sum && start < end-1){
            currentsum -= arr[start];
            start++;
        }

        if(currentsum == sum)return true;
        if(end < size)currentsum += arr[end];
    }

    return currentsum==sum;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
