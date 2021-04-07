#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void sorttwotypes(int arr[], int size){
    int l=0; int r = size-1;

    while(l < r){
        if(arr[l] < 0){
            l++;
        }

        if(arr[r] > 0){
            r--;
        }
        if(arr[l] > 0 && arr[r] < 0){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
}

int main() {
    int arr[] = {-10, 2, 5, -2, -4, 5, -4, 7};
    int arr2[] = {-12,10,-10,15};

    sorttwotypes(arr2, 4);

    for(int i=0; i<4; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
