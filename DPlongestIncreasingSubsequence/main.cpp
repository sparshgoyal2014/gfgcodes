#include <iostream>
#include <climits>

using namespace std;

int longestIncreasingSubsequence(int arr[], int size){
    int lis[size];
    lis[0] = 1;

    for(int i=1; i<size; i++){

        lis[i] = 1;

        for(int j=0; j<i; j++){
            if(arr[j] < arr[i]){
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }


    int result = lis[0];
    for(int i=0; i<size; i++){
        result = max(result, lis[i]);
    }

    return result;
}





int main() {
    return 0;
}
