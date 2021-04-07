#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int searchInInfinite(int arr[], int x){
    if(arr[0] == x)return 0;
    int i= 1;
    while(arr[i] < x){
        i = i*2;
    }

    if(arr[i] == x)return i;

    return binary_search(arr + i/2, arr + i, x);
}



int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout << searchInInfinite(arr,3);

    return 0;
}
