#include <iostream>
using namespace std;

int findPeak(int arr[], int size, int low, int high){
    if(low <= high){
        int mid = low + (high-low)/2;

        if(mid == 0 && arr[mid] > arr[mid+1]){
            return arr[mid];
        }

        if(mid == size-1 && arr[mid] > arr[mid-1]){
            return arr[mid];
        }

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return arr[mid];
        }

        if(arr[mid] < arr[mid-1]){
            return findPeak(arr,size,low,mid-1);
        }
        return findPeak(arr,size,mid+1,high);
    }

    return -1;
}


int main() {

    int arr[] = {10,20,15,2,23,90,67};

    cout << findPeak(arr, 7,0,6);
    cout << &"avx" << endl;

    return 0;
}
