#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMinCoins(int arr[], int size, int value){

    int dp[value+1];  // size of dp array is value+1 bcz (value = 0) is also the case(base case)

    for(int i=1; i<=value; i++){
        dp[i] = INT_MAX;
    }


    // dp[i] = minimum coins to make value i;

    dp[0] = 0;

    for(int i=1; i<= value; i++){
        int temp = INT_MAX;
        for(int j=0; j<size; j++){
            if(arr[j] <= i){
                temp = min(temp, dp[i - arr[j]]);
            }
        }

        dp[i] = temp;
    }

    return dp[value];

}


int main() {

    return 0;
}
