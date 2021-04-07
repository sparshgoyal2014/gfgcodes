#include <iostream>
using namespace std;

int lomutoPartition(int arr[], int l, int h){

    int pivot = arr[h];

    int i = l-1; // initially windows of smaller elements than pivot having 0 number of elements.
    for(int j=l; j<=h-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[h], arr[i+1]);

    return pivot;

}

int kthSmallestElement(int arr[], int l, int r, int k){  // I think my this solution is recursive//
    int partitionNumber = lomutoPartition(arr, l, r);

    if(k-1 == partitionNumber){
        return arr[k-1];
    }else if(k-1 > partitionNumber){
        kthSmallestElement(arr, partitionNumber, r, k);
    }else if(k-1 < partitionNumber){
        kthSmallestElement(arr, l, partitionNumber-1, k);
    }
}

// Let's now do the Interative Solution
int iterativeSmallestElement(int arr[], int size, int k){
    int l=0; int r = size-1;

    while (l <= r){
        int p = lomutoPartition(arr, l, r);
        if(k-1 == p){
            return p;
        }else if(k-1 < p){
            r = p-1;
        }else if(k-1 > p){
            l = p + 1;
        }
    }

    return -1;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
