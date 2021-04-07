#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximumSumNoTwoConsecutive(int arr[], int size){

    if(size <= 0){
        return 0;
    }
    if(size == 1){
        return arr[size - 1];
    }

    return max(maximumSumNoTwoConsecutive(arr, size-1),arr[size - 1] +  maximumSumNoTwoConsecutive(arr, size-2));
}

// DP solution

int maxSumNoConsecutiveDP(int arr[], int size){
    int dp[size + 1];
    memset(dp, 0, sizeof(dp));

    dp[0] = 0;
    dp[1] = arr[0];
    dp[2] = max(arr[0], arr[1]);

    for(int i=3; i<=size; i++){
        dp[i] = max(dp[i-1], arr[i-1] + dp[i-2]);
    }

    return dp[size];
}


int main() {

    int arr[] = {10,5,15,20,2,30};
    cout << maximumSumNoTwoConsecutive(arr, 6) << endl;

    cout << maxSumNoConsecutiveDP(arr, 6) << endl;

    return 0;
}
