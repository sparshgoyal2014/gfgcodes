#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int waysToGetSUm(int arr[], int size, int sum){
    int dp[sum+1];    /// dp[i] is no. of ways to get sum i;

    for(int i=0; i<=sum; i++){
        dp[i] = 0;
    }

    dp[0] = 1;


    for(int i=1; i<=sum; i++){
        for(int j=0; j<size; j++){
            if(arr[j] <= i){
                dp[i] += dp[i - arr[j]];
            }
        }
    }


    return dp[sum];
}
int countWays(int arr[], int m, int N)
{
    int count[N + 1];
    memset(count, 0, sizeof(count));

    // base case
    count[0] = 1;

    // count ways for all values up
    // to 'N' and store the result
    for (int i = 1; i <= N; i++)
        for (int j = 0; j < m; j++)

            // if i >= arr[j] then
            // accumulate count for value 'i' as
            // ways to form value 'i-arr[j]'
            if (i >= arr[j])
                count[i] += count[i - arr[j]];

    // required number of ways
    return count[N];

}


int main() {
    int arr[] = {1,2,4,5,6,10,20};
    int sum = 15;

    cout << waysToGetSUm(arr, 7, sum) << endl;

//    cout << countWays(arr, 3, 7) << endl;


    return 0;
}


