#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxSumIncreasingSubsequence(int arr[], int size){
    int dp[size];      // dp[i] represents maximum sum increasing subsequence ending with i th element
    memset(dp, 0, sizeof(dp));

    dp[0] = arr[0];

    for(int i=1; i<size; i++){
        dp[i] = arr[i];

        for(int j=i-1; j>=0; j--){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }

    }


    int result = INT_MIN;

    for(int i=0; i<size; i++){
        if(dp[i] > result){
            result = dp[i];
        }

    }


    return result;

}

int main() {
    return 0;
}
