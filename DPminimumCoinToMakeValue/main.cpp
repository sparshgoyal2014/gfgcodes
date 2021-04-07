#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int getMinCoinsUtil(int arr[], int size, int value){
    if(value == 0){
        return 0;
    }

    int result = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] <= value){
            int tempResult = getMinCoinsUtil(arr, size, value - arr[i]);

            if(tempResult != INT_MAX){
                result = min(result, tempResult + 1);
            }
        }
    }

    return result;
}






int getMinCoins(int arr[], int size, int value){

}

int main() {


    return 0;
}
