#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int chocolateDistribution(int arr[], int size, int m){
    sort(arr, arr+size);

    int minDiff = INT_MAX;
    for(int i=0; i<size-m+1; i++){
        int minDiff = min(arr[i+m-1] - arr[i], minDiff);
    }

    return minDiff;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
