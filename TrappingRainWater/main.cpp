#include <iostream>
using namespace std;

int trapWater(int arr[], int size){ // naive
    int result = 0;

    for(int i=1; i<size-1; i++){
        int lMax = arr[i];

        for(int j=0; j<i; j++){
            lMax = max(lMax, arr[j]);
        }

        int rMax = arr[i];
        for(int j = i+1; j<size; j++){
            rMax = max(rMax, arr[j]);
        }

        result += min(lMax, rMax) - arr[i];
    }

    return result;
}


int trapWater2(int arr[], int size){
    int result = 0;
    int lMax[size], rMax[size];

    lMax[0] = arr[0];
    for(int i=1; i<size; i++){
        lMax[i] = max(lMax[i-1], arr[i]);
    }

    rMax[size-1] = arr[size-1];
    for(int i=size-2; i>=0; i--){
        rMax[i] = max(rMax[i+1], arr[i]);
    }

    for(int i=1; i<size-1; i++){
        result += min(lMax[i], rMax[i]) - arr[i];
    }

    return result;
}

int main() {

    return 0;
}
