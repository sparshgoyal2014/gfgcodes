#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int size, int exp){
    int count[10] = {0};
    for(int i=0; i<size; i++){
        count[(arr[i]/exp)%10]++;
    }

    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    int output[size];

    for(int i = size-1; i>=0; i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0; i<size; i++){
        arr[i] = output[i];
    }


}

void radixSort(int arr[], int size){
    int maxEle = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxEle){
            maxEle = arr[i];
        }
    }

    for(int exp = 1; maxEle/exp > 0; exp = exp*10){
        countingSort(arr, size, exp);
    }
}

int main() {

    int arr[] = {312,54,1,3,4,204};

    radixSort(arr, 6);

    for(int i: arr){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
