#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/************************************************************************************************/
// recursive 1
int getMaximumCoinGameUtil(int arr[], int size, int i, int j, int sum){
    if(i + 1 == j){
        return max(arr[i], arr[j]);
    }

    return max(sum - getMaximumCoinGameUtil(arr, size, i + 1, j, sum - arr[i]), sum - getMaximumCoinGameUtil(arr, size, i, j-1, sum - arr[j]));
}



int getMaximumCoinGame(int arr[], int size){
    int result = 0;
    int sum = 0;

    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    result = getMaximumCoinGameUtil(arr, size, 0, size-1, sum);

    return result;

}

/************************************************************************************************/
//
//
//
//
//
/************************************************************************************************/
// recursive 2

int getMaximumCoinGame2Util(int arr[], int size, int i, int j){
    if(i + 1 == j){
        return max(arr[i], arr[j]);
    }


    return max(arr[i] + min(getMaximumCoinGame2Util(arr, size, i+2, j), getMaximumCoinGame2Util(arr, size, i+1, j-1)),
            arr[j] + min(getMaximumCoinGame2Util(arr, size, i, j-2), getMaximumCoinGame2Util(arr, size, i+1, j-1)));
}


int getMaximumCoinGame2(int arr[], int size){
    int result = 0;

    result = getMaximumCoinGame2Util(arr, size, 0, size=1);

    return result;
}

/************************************************************************************************/

/************************************************************************************************/

// DP solution

int getMaxSumDP(int arr[], int size){
    int dp[size][size];

    for(int i=0; i<size-1; i++){
        dp[i][i+1] = max(arr[i], arr[i+1]);
    }

    for(int gap = 3; gap<size; gap+=2){
        for(int i=0; i+gap < size; i++){
            int j = i+gap;

            dp[i][j] = max(arr[i] + min(dp[i+2][j], dp[i+1][j-1]), arr[j] + min(dp[i+1][j-1], dp[i][j-2]));

        }
    }


    return dp[0][size-1];

}






int main() {

    return 0;
}
