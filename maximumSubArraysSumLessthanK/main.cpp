#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Given an array of n positive integers and a positive integer k,
// the task is to find the maximum subarray size such that all subarrays of that size have sum of elements less than or equals to k.


int maxSubArraysLengthSumLessThanK(int arr[], int size, int k){

    int prefixSum[size];
    prefixSum[0] = arr[0];

    for(int i=1; i<size; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    int l = 0;
    int r = size - 1;

    int result = 0;


    while(l <= r){

        bool flag = true;
        int mid = l + (r-l)/2;

        for(int i=mid; i<size; i++){
            if(prefixSum[i] - prefixSum[i - mid] > k){
                flag = false;
                break;
            }
        }

        if(flag == false){
            r = mid-1;
        }else{
            result = mid+1;
            l = mid+1;
        }

    }

    return result;

}

int main() {

    return 0;
}
