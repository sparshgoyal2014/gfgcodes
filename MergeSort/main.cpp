#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int lSize = m+1-l; int rSize = r-m;
    int left[lSize];
    int right[rSize];
    for(int i=0; i<lSize; i++){
        left[i] = arr[l+i];
    }
    for(int i=0; i<rSize; i++){
        right[i] = arr[i+m+1];
    }

    int i=0; int j=0;
    int k = l;

    while(i < lSize && j < rSize){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while(i < lSize){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < rSize){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


int main() {

    int arr[] = {5,4,2,3,7,1,8,9};
    mergeSort(arr, 0, 7);

    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
