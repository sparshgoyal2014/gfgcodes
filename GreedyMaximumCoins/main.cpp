#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// you have 10, 5, 2, 1 coins with infinite supply you need to make payment with least number of coins
int maxCountCoins(int coins[], int payment){
    sort(coins, coins+4);
    reverse(coins, coins+4);

    int result = 0;
    int amount = payment;

    for(int i=0; i<4; i++){
        if(coins[i] <= amount){
            int temp = amount/coins[i];
            result += temp;
            amount = amount - (coins[i]*temp);
        }

        if(amount == 0){
            break;
        }
    }

    return result;

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
