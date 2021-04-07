#include <iostream>
#include <bits/stdc++.h>
#define max 100000

using namespace std;

int maxOccurence(int left[], int right[], int size){
    int arr[max];
    memset(arr, 0, sizeof arr);

    int maxTravel = -1;
    for(int i=0; i<size; i++){
        arr[left[i]]++;
        arr[right[i]+1]--;

        if(right[i] > maxTravel)maxTravel = right[i];
    }

    int maxSum = arr[0];
    int result = 0;

    for(int i=1; i<maxTravel+1; i++){
        arr[i] += arr[i-1];
        if(maxSum < arr[i]){
            maxSum = arr[i];
            result = i;
        }
    }

    return result;


}

int main() {
    int left[3] = {1,2,3};
    int right[3] = {3,5,7};

    cout << maxOccurence(left, right, 3);
    return 0;
}
