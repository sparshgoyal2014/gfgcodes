#include <iostream>
using namespace std;

bool haveEqPoint(int arr[], int size){
    int totalSum = 0;
    for(int i=0; i<size; i++){
        totalSum += arr[i];
    }
    int lSum = 0;
    for(int i=0; i<size; i++){
        lSum += arr[i];
        if((lSum-arr[i]) == (totalSum-lSum))return true;
    }
    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[5] = {1,2,3,4,5};
    cout << arr[-1] << endl;
    return 0;
}
