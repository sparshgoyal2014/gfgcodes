#include <iostream>
using namespace std;

void naivePartition(int arr[], int l, int p, int h){
    int temp[h-l+1];
    int index = 0;

    for(int i=l; i<=h; i++){
        if(arr[i] <= arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l; i<=h; i++){
        if(arr[i] > arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l; i<=h; i++){
        arr[i] = temp[i-l];
    }

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
