#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int j = i-1;
        int key = arr[i];

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {2,1,5,6,7,4,8,3,9};
    for(int i=0; i<9; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, 9);

    for(int i=0; i<9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
