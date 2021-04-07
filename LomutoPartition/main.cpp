#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void lomutoPartition(int arr[], int l, int p, int h){
    swap(arr[p], arr[h]);// we always consider pivot point to be the end point in this algorithm.
    int pivot = arr[h];
    int i = l-1; // initially windows of smaller elements than pivot having 0 number of elements.
    for(int j=l; j<=h-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[h], arr[i+1]);

}

int main() {

    return 0;
}
