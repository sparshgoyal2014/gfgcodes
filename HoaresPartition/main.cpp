#include <iostream>
using namespace std;

void hoaresPartition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;

    while(true){
        do{
            i++;
        }while(arr[i+1] < pivot);

        do{
            j--;
        }while(arr[j] >= pivot);

        if(i >= j){
            return;
        }

        swap(arr[i], arr[j]);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
