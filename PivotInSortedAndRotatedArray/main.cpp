#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[], int low, int high){

    if(high < low)return -1;
    if(high == low)return low;

    int mid = low + (high - low)/2;

    if(mid < high && arr[mid] > arr[mid+1]){
        return mid;
    }

    if(mid > low && arr[mid] < arr[mid-1]){
        return mid-1;
    }

    if(arr[low] >= arr[mid]){
        return pivot(arr, low, mid-1);
    }
    return pivot(arr, mid+1, high);

}

int search(int arr[], int low, int high, int x, int size){
    int pivot = ::pivot(arr, low, high);  // qualified-name-lookup

    if(pivot == -1){
        return binary_search(arr+low, arr+high, x);
    }

    if(arr[pivot] == x){
        return pivot;
    }

    if(arr[0] <= x){
        return binary_search(arr, arr+pivot-1, x);
    }

    return binary_search(arr+pivot+1, arr+size-1, x);


}

int test(int a){
    return a;
}

int testPassArray(int arr[], int size){
    cout << sizeof(arr) << endl;
};
int main() {
    int x = 4;
    cout << &test(x) << endl;

    return 0;
}
