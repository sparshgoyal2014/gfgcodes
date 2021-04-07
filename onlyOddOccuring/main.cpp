#include <iostream>
using namespace std;

int findOddOccuring(int arr[], int size){
    int result = 0;
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }

    //Algorithm is:   x^x = 0
//                      x^0 = x
    return result;
}

int main() {

    int arr[7] = {4,4,3,5,4,5,4};
    cout << findOddOccuring(arr, 7) << endl;

    return 0;
}
