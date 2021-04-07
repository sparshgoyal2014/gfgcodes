#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int eggDrop(int eggs, int floors){// This functions return minimum number of trials in the worst case ssituatuion when you have e eggs and f floors


    if(eggs == 1){
        return floors;
    }

    if(floors == 1){
        return 1;
    }

    if(floors == 0){
        return 0;
    }


    int result = -5;

    for(int i=1; i<=floors; i++){
        result = min(result, 1 +  max(eggDrop(eggs-1, i-1), eggDrop(eggs, floors-i)));
    }

    return result ;


}


// DP based Solution

int eggDropping(int floors, int eggs){
    int dp[floors+1][eggs+1];

    for(int i=1; i<=eggs; i++){
        dp[0][i] = 0;
        dp[1][i] = 1;
    }

    for(int i=2; i<=floors; i++){
        dp[i][1] = i;
    }

    for(int i=2; i<=floors; i++){
        for(int j=2; j<=eggs; j++){
            dp[i][j] = INT_MAX;

            for(int x=0; x<=i; x++){
                dp[i][j] = min(dp[i][j],1 +  max(dp[i-1][j-1], dp[i-x][j]));
            }
        }
    }

    return dp[floors][eggs];

}




int main() {

    cout << eggDrop(2, 15) << endl;

    return 0;
}
