#include <iostream>
using namespace std;


int maxCutsOnRod(int length, int a, int b, int c){
    int dp[length+1];

    dp[0] = 0;

    // dp[i]  ----> maximum cuts on the rod of length i

    for(int i=1; i<=length; i++){
        dp[i] = -1;
        if(i-a >= 0){
            dp[i] = max(dp[i], dp[i-a]);
        }
        if(i-b >= 0){
            dp[i] = max(dp[i], dp[i-b]);
        }
        if(i-c >= 0){
            dp[i] = max(dp[i], dp[i-c]);
        }

        if(dp[i] != -1){
            dp[i] += 1;
        }
    }

    return dp[length];
}
    
int main() {
    return 0;
}
