#include <iostream>
using namespace std;

bool checkIfDividedIntoThree(int arr[], int size){
    int prefixSum[size];
    prefixSum[0] = arr[0];
    for(int i=1; i<size; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    if(prefixSum[size-1] % 3  != 0)return false;
    int pos = -1;
    int count = 0;
    for(int i=0; i<size; i++){
        if(prefixSum[i] - (pos == -1 ? 0 : prefixSum[pos])  ==   prefixSum[size-1]/3){
            pos = i;
            count++;
        }else if(prefixSum[i] - prefixSum[pos] > prefixSum[size-1]/3)return false;
    }

    return count == 3;
}

int main() {
    int arr[6] = {2,3,4,1,1,4};
    cout << checkIfDividedIntoThree(arr, 6) << endl;
    cout << true;
    return 0;
}
