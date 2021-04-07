#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// we can also use Catalan's number
// countBST(n) = 1/(n+1) * 2nCn;

int countBST(int n){
    if(n == 0){
        return 1;
    }

    if(n == 1){
        return 1;
    }

    if(n == 2){
        return 2;
    }

    if(n == 3){
        return 5;
    }

    int result = 0;

    if(n % 2 == 0){
        for(int i=0; i<n/2; i++){
            result = result + countBST(i) * countBST(n-i-1);
        }

        return result * 2;
    }else{
        for(int i=0; i<(n-1)/2; i++){
            result += countBST(i) * countBST(n-i-1);
        }
        result = result * 2;
        result += countBST(n/2) * countBST(n/2);

        return result;
    }

}



// dp solution
int countBSTDP(int n){
    int dp[n+1];
    memset(dp, 0, sizeof(dp));

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        for(int j = 0; j<i; j++){
            dp[i] += dp[j] * dp[i-j-1];
        }
    }

    return dp[n];


}

int main() {

    cout << countBST(10) << endl;

    cout << countBSTDP(10) << endl;

    return 0;
}
