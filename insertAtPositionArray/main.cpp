#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a=b;
    b= temp;

    return ;
}
void insert(int arr[], int size, int capacity, int element, int position){
    if(capacity == size){
        cout << "Array is Full.." << endl;
        return;
    }

    arr[size] = element;

    for(int i=size; i>=0; i--){
        if(position-1 == i)break;
        swap(arr[i], arr[i-1]);
    }
}

void deleteElement(int arr[], int size, int element){
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == element)break;
    }

    if(i == size){
        cout << "Cannot find the element in the array" << endl;
        return ;
    }

    for(int j=i; j<size-1; j++){
        arr[j] = arr[j+1];
    }
    return ;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[7] = {1,2,3,4,5};
    printArray(arr, 5);

    insert(arr,5,7,9,2);
    printArray(arr, 6);

    deleteElement(arr, 6, 3);
    printArray(arr,5);
    return 0;
}
