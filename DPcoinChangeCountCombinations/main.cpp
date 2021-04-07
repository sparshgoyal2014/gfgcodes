#include <iostream>
using namespace std;

int possibleWaysChooseCoins(int coin[], int n, int sum){
    if(sum == 0){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    int result = possibleWaysChooseCoins(coin, n-1, sum);

    if(coin[n-1] <= sum){
        result += possibleWaysChooseCoins(coin, n, sum - coin[n-1]);
    }

    return result;
}

int coinCountTabulation(int coin[], int n, int sum){
    int dp[sum+1][n+1];

    for(int i=0; i<=n; i++){
        dp[0][i] = 1;
    }

    for(int i=1; i<=sum; i++){
        dp[i][0] = 1;
    }

    for(int i=1; i<=sum; i++){
        for(int j=1; j<=n; j++){
            dp[i][j] = dp[i][j-1];

            if(coin[j-1] <= i){
                dp[i][j] += dp[i - coin[j-1]][j];
            }
        }
    }

    return dp[sum][n];

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
