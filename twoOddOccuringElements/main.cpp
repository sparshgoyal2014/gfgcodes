#include <iostream>
using namespace std;

void printTwoOddOccuring(int arr[], int size){
    int XOR=0, result1=0, result2 = 0;
    for(int i=0; i<size; i++){
        XOR = XOR ^ arr[i];
    }

    int setBitNumber = XOR & ~(XOR-1);

    for(int i=0; i<size; i++){
        if((arr[i] ^ setBitNumber) != 0){
            result1 = result1 ^ arr[i];
        }else{
            result2 = result2 ^ arr[i];
        }
    }

    cout << result1 << " " << result2 << endl;
}

int main() {

    int arr[] = {3,4,3,4,8,4,4,32,7,7};
    printTwoOddOccuring(arr, 10);

    return 0;
}
