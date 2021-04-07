#include <iostream>
using namespace std;

void stableCountSort(int arr[], int k, int size){
    int count[k];

    for(int i=0; i<k; i++){
        count[i] = 0;
    }

    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<k; i++){   // counting number of elements less than or equal
        count[i] += count[i-1];
    }

    int output[size];


    for(int i = size-1; i>=0; i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0; i<size; i++){
        arr[i] = output[i];
    }


}

int main() {

    return 0;
}
