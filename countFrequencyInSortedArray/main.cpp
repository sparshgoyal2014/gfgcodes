#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int x, int low, int high){
    if(high >= low){

        int mid = low + (high-low)/2;

        if((mid == 0 || x > arr[mid-1]) && arr[mid] == x){
            return mid;
        }

        if(x > arr[mid]){
            return firstOccurrence(arr, x, mid+1, high);
        }

        return firstOccurrence(arr, x, low,mid-1);
    }

    return -1;
}

int lastOccurrence(int arr[], int x, int low, int high, int size){
    if(high >= low){

        int mid = low + (high-low)/2;

        if((mid == size-1 || x < arr[mid+1]) && arr[mid] == x){
            return mid;
        }

        if(x > arr[mid]){
            return lastOccurrence(arr, x, mid+1, high, size);
        }

        return lastOccurrence(arr, x, low,mid-1, size);
    }

    return -1;
}

int countFrequency(int arr[], int low, int high, int size, int x){
    int first = firstOccurrence(arr, x, low, high);
    int last = lastOccurrence(arr, x,low,high,size);

    return last - first + 1;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
