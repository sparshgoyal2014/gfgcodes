#include <iostream>
#include<vector>
using namespace std;

//Iterative Ternary Search

int ternarySearch(int arr[], int size, int x){
    int low = 0;
    int high = size-1;

    while(low <= high){
        int mid1 = low + (high-low)/3;
        int mid2 = high - (high-low)/3;

        if(arr[mid1] == x){
            return mid1;
        }

        if(arr[mid2] == x){
            return mid2;
        }

        if(x < arr[mid1]){
            high = mid1-1;
        }else if(x > arr[mid2]){
            low = mid2+!;
        }else{
            low = mid1+1;
            high = mid2-1;
        }
    }

    return -1;
}

// recursive Ternary Search
int recTernarySearch(int arr[], int low, int high, int x){
    if(high >= low){
        int mid1 = low + (high-low)/3;
        int mid2 = low + (high-low)/3;

        if(arr[mid1] == x){
            return mid1;
        }

        if(arr[mid2] == x){
            return mid2;
        }

        if(x < arr[mid1]){
            return recTernarySearch(arr, low, mid1-1, x);
        }

        if(x > arr[mid2]){
            return recTernarySearch(arr, mid2+1, high, x);
        }

        return recTernarySearch(arr, mid1+1, mid2-1, x);
    }

    return -1;
}




int main() {
    vector<int>:: iterator itr;
    return 0;
}
