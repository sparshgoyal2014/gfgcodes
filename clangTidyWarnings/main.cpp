#include <iostream>
using namespace std;

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
        arr[i] = 0;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    int arr[5] = {1,2,3,4,5};

    display(arr, 5);
    return 0;
}
