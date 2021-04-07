#include <iostream>
using namespace std;

int rotateLeft(int arr[], int size){

    int temp = arr[0];


    for(int i=0; i<size-1; i++){
        arr[i] = arr[i+1];
    }

    arr[size-1] = temp;

    return size;
}


int rotateLeftBy(int arr[], int size, int k){
    for(int j=0; j<k; j++){
        int temp = arr[0];


        for(int i=0; i<size-1; i++){
            arr[i] = arr[i+1];
        }

        arr[size-1] = temp;
    }

    return size;
}

int rotateLeftBy2(int arr[], int size, int k){
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }

    for(int i=0; i<size-k; i++){
        arr[i] = arr[i+k];
    }

    for(int i=size-k; i<size; i++){
        arr[i] = temp[i-size+k];
    }

    return size;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main() {

    int arr[] = {1,2,3,4,5};

    rotateLeftBy2(arr,5,3);
    printArray(arr, 5);


    return 0;
}
