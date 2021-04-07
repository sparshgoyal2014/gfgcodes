#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minmcmUtil(int arr[], int size, int start, int end, int &minimum, int &temp){

    if(end - start == 1){
        temp += 0;
        return ;
    }

    if(end - start == 2){
        temp += arr[start] * arr[end] * arr[start + 1];
        return ;
    }



    for(int i=start + 1; i<end; i++){

        int min1 = 0;
        int min2 = 0;

        minmcmUtil(arr, size, 0, i, minimum, temp);
        min1 = minimum;
        minimum = INT_MAX;
        minmcmUtil(arr, size, i+1, size-1, minimum, temp);
        min2 = minimum;

        minimum = min(minimum, min1 + min2 + arr[start] * arr[i] * arr[end]);
        temp = 0;
    }

}

int minmcm(int arr[], int size){
    int result = INT_MAX;
    int temp = 0;

    minmcmUtil(arr, size, 0, size-1, result, temp);


    return result;

}

int matrixChain(int arr[], int size, int i, int j){
    if(i + 1 == j){
        return 0;
    }

    int result = INT_MAX;

    for(int k = i+1; k<j; k++){
        result = min(result, matrixChain(arr, size, i,k) + matrixChain(arr, size, k, j) + arr[i] * arr[j] * arr[k]);
    }

    return result;
}


int matrixChainDp(int arr[], int size){
    int dp[size][size];

    for(int i=0; i<=size-2; i++){
        dp[i][i+1] = 0;
    }

    for(int gap = 2; gap < size; gap++){
        for(int i=0; i+gap < size; i++){
            int j = gap + i;

            dp[i][j] = INT_MAX;

            for(int k=i+1; k<=j-1; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + arr[i] * arr[j] * arr[k]);
            }

        }
    }

    return dp[0][size-1];

}


int main() {

    return 0;
}
