#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void countingSort(int arr[], int size, int k){
    int count[k];  // variable sized array can not be initialized

    for(int i=0; i<k; i++){
        count[i]++;
    }

    int index = 0;

    for(int i=0; i<k; i++){
        for(int j=0; j<count[i]; j++){
            arr[index] = i;
            index++;
        }
    }
}


int main() {

    return 0;
}
