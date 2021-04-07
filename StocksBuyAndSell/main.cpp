#include <iostream>
using namespace std;

int profit(int arr[], int size){
    int profit = 0;

    for(int i=1; i<size; i++){
        if(arr[i] > arr[i-1])
            profit += (arr[i]-arr[i-1]);
    }

    return profit;
}


int main() {

    int arr[] = {1,5,3,8,12};
    cout << profit(arr, 5);

    return 0;
}
