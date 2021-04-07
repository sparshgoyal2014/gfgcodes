#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left < right){
        swap(arr[left], arr[right]);
    }
}

void reArrange(int arr[], int size){
    reverseArray(arr, size);
}

int main() {

    return 0;
}
