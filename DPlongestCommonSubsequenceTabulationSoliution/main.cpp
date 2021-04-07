#include <iostream>
using namespace std;

int lcsTabulation(string str1, string str2){
    int m = str1.length(); int n = str2.length();  // m and n are lengths of string str1 and str2 resp.

    int dp[m+1][n+1];  // dp[i][j]  stores the longest common subsequence of strings with length i and j

    for(int i=0; i<=m; i++){
        dp[i][0] = 0;
    }

    for(int i=0; i<=n; i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(str1[i-1] == str2[j-1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[m][n];


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
