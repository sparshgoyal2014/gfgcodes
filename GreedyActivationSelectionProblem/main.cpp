#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int activationSelection(pair<int, int> arr[], int size){
    sort(arr, arr+size, comp);

    vector<pair<int, int>> result;
    result.push_back(arr[0]);

    for(int i=1; i<size; i++){
        if(arr[i].first >= result.back().second){
            result.push_back(arr[i]);
        }
    }

    return result.size();
}


int main() {

    return 0;
}
