#include <iostream>
#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int sumofArrayElements(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    return sum;
}

void generateSubSet(int arr[], int size, int sum, int index){

    int currentSum = sumofArrayElements(arr,size);

    if(index == size)return ;
    if(currentSum == sum){
        printArray(arr,size);
    }


    generateSubSet(arr,size-1, sum, index+1);
    generateSubSet(arr,size-1, sum, index+1);
}

int main() {

    int arr[] = {10,5,2,3,6};

    generateSubSet(arr,5,8,0);
    return 0;
}
