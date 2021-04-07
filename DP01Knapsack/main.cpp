#include <iostream>
#include <bits/stdc++.h>
#include <windef.h>
using namespace std;


// Recursive solution
int maxValueUndeGivenWeight(int capacity, int val[], int weight[], int size){
    if(size==0 || capacity==0){
        return 0;
    }

    if(weight[size-1] > capacity){
        return maxValueUndeGivenWeight(capacity, val, weight, size-1);
    }

    return max(maxValueUndeGivenWeight(capacity, val, weight, size-1), maxValueUndeGivenWeight(capacity - weight[size-1], val, weight, size-1) + val[size-1]);

}

// DP solution
int maxValueDp(int val[], int weight[], int capacity, int size){
    int dp[size+1][capacity+1];

    for(int i=0; i<=capacity; i++){
        dp[i][0] = 0;
    }

    for(int i=0; i<=size; i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=size; i++){
        for(int j=1; j<=capacity; j++){
            if(weight[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i-1]] + val[i-1]);

            }

        }
    }

    return dp[size][capacity];


}



int main() {

//    cout << printf("codingquiz");
    cout << sizeof(printf("codingquiz"));



    return 0;
}
