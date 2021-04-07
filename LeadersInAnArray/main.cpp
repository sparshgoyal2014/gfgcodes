#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printLeaders(int arr[], int size){
    int currentLeader = arr[size-1];
    cout << currentLeader << " ";
    for(int i=size-2; i>=0; i--){
        if(arr[i] > currentLeader){
            currentLeader = arr[i];
            cout << currentLeader << " ";
        }
    }

    cout << endl;
}

vector<int> leaders(int arr[], int size){
    vector<int> v;
    v.push_back(arr[size-1]);
    int rightLeader = arr[size-1];

    for(int i=size-1; i>=0; i++){
        if(arr[i] >= rightLeader){
            v.push_back(arr[i]);
            rightLeader = arr[i];
        }
    }

    reverse(v.begin(), v.end()+1);

    return v;
}

int main() {

    int arr[] = {7,10,4,3,6,5,2};
    printLeaders(arr,7);
    return 0;
}
