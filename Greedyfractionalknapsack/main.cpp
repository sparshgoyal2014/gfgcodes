#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    double vwratioP1 = (double)p1.first/p1.second;
    double vwratioP2 = (double)p2.first/p2.second;

    return vwratioP1 > vwratioP2;

}

double maximumKnapsackValue(pair<int, int> arr[], int size, int capacity){
    sort(arr, arr+size, comp);

    double result = 0;
    int currentCapacity = capacity;

    for(int i=0; i<size; i++){
        if(arr[i].second <= currentCapacity){
            result += arr[i].first;
            currentCapacity = currentCapacity - arr[i].second;
        }else{
            result += arr[i].first*((double)currentCapacity/arr[i].second);
            currentCapacity = 0;
        }

        if(currentCapacity == 0){
            break;
        }
    }

    return result;

}

int main() {

    return 0;
}
