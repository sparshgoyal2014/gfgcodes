#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void coinChangeCountUtil(int coins[], int size, int sum, int &result){
    if(sum == 0){
        result += 1;
        return ;
    }
    if(size == 0){
        return;
    }

    if(coins[size - 1] <= sum) {
        coinChangeCountUtil(coins, size, sum - coins[size - 1], result);
    }
    coinChangeCountUtil(coins, size-1, sum, result);

}

int cointChangeCount(int coins[], int size, int sum){
    int result = 0;

    coinChangeCountUtil(coins, size, sum, result);

    return result;

}


int countChangeUtilFinite(int coinsp[], int size)

int main() {
    std::cout << "Hello, World!" << std::endl;
    int coins[] = {1, 5, 10};
    cout << cointChangeCount(coins, 3, 12);
    return 0;
}
