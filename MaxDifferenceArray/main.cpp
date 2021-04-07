#include <iostream>
using namespace std;

int maxDifference(int arr[], int size){
    int maxDifference = arr[1]- arr[0];
    int min = arr[0];

    for(int i=1; i<size; i++){
        maxDifference = max(maxDifference, arr[i] - min);
        min = min(min, arr[i]);
    }

    return maxDifference;
}

int main() {

    return 0;
}
