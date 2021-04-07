#include <iostream>
using namespace std;

int countAndMerge(int arr[], int l, int m, int r){

    int result = 0;

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

            result = result + (lSize - i);

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

    return result;
}

int countInversion(int arr[], int l, int r){
    int result = 0;

    if(l < r){
        int m = l + (r - l)/2;
        result += countInversion(arr, l, m);
        result += countInversion(arr, m+1, r);
        result += countAndMerge(arr, l, m, r);

    }

    return result;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
