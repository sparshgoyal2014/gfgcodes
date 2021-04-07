#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countSubsetSumUtil(int arr[], int size, int currentIndex, int sum, int &count){

    if(currentIndex < 0){
        return ;
    }
    if(sum == 0){
        count++;
        return ;
    }

    if(sum < 0){
        return ;
    }

    countSubsetSumUtil(arr, size, currentIndex - 1, sum - arr[currentIndex], count);
    countSubsetSumUtil(arr, size, currentIndex - 1, sum, count);


}

int countSubsetSum(int arr[], int size, int sum){
    int result = 0;
    countSubsetSumUtil(arr, size, size-1, sum, result);
    return result;
}

int countSubsetSumDP(int arr[], int size, int sum){
    int dp[size + 1][sum + 1];
    for(int i=1; i<=sum; i++){
        dp[0][i] = 0;
    }

    for(int i=0; i<=size; i++){
        dp[i][0] = 1;
    }

    for(int i=1; i<=size; i++){
        for(int j=1; j<sum; j++){
            if(arr[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i]];
            }
        }
    }

    return dp[size][sum];
}



int main() {

    int arr[] = {3,20,10,15};
    int sum = 25;
    cout << countSubsetSum(arr, sizeof(arr)/ sizeof(int), sum) << endl;

    return 0;
}
