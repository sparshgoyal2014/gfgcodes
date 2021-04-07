#include <iostream>
using namespace std;

int leftMost(int arr[], int x, int low, int high){

    int mid = low + (high - low)/2;


    if(low > high){
        return -1;
    }


    if((mid == 0 || arr[mid-1] < x) && arr[mid] == x )return mid;

    if(arr[mid] > x)return leftMost(arr, x, low, mid-1);
    return leftMost(arr, x, mid+1, high);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
