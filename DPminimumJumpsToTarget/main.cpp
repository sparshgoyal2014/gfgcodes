#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// recursive 1
int minStepsToTarget(int arr[], int size, int currentIndex){
    if(currentIndex == size-1){
        return 0;
    }

    int result = INT_MAX;

    for(int i=1; i<=arr[currentIndex]; i++){

        if(currentIndex + i < size){
            int temp = minStepsToTarget(arr, size, currentIndex + i);

            if(temp != INT_MAX){
                result = min(result, temp + 1);
            }
        }

    }

    return result;
}


// recursive 2
int minStepsToTargetRecur2(int arr[], int size){
    if(size == 1){
        return 0;
    }

    int result = INT_MAX;

    for(int i=0; i<=size-2; i++){
        if(arr[i] + i >= size-1){
            int tempResult = minStepsToTargetRecur2(arr, i+1);

            if(tempResult != INT_MAX){
                result = min(result, tempResult+1);
            }
        }
    }

    return result;

}


// DP solution

int minStepsToreachTarget(int arr[], int size){
    int dp[size];
    dp[0] = 0;

    for(int i=1; i<size; i++){
        dp[i] = INT_MAX;
    }



    for(int i=1; i<size; i++){
        for(int j=0; j<i; j++){
            if(arr[j] + j >= i){
                if(dp[j] != INT_MAX){
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
    }


    return dp[size-1];
}








int main() {

    int arr[] = {4,1,5,3,1,3,2,1,8};
    cout << minStepsToTarget(arr, 9, 0);

    return 0;
}
