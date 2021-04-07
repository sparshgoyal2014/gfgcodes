#include <iostream>
using namespace std;

void swap(int& a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {

    int arr[] = {1,2,3,4,5};
    int low = 0;
    int high = sizeof(arr)/ sizeof(int) -1;

    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

    printArray(arr, 5);

    low = 0;
    high = sizeof(arr)/ sizeof(int) - 1;
    while(low < high){
        swap2(arr[low], arr[high]);
        low++;
        high--;
    }

    printArray(arr, 5);


    return 0;
}
