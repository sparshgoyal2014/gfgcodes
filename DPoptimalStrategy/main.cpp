#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxValueForCurrentPlayerUtil(int arr[], int size, int i, int j, int sum){  // i and j refers to the first and last elemtnt of the array available to pick for the current player
    if(i+1 == j){
        return max(arr[i], arr[j]);
    }

    return max(sum - maxValueForCurrentPlayerUtil(arr, size, i+1, j, sum - arr[i]), sum - maxValueForCurrentPlayerUtil(arr, size, i, j-1, sum - arr[j]));
}

int maxValueForCurrentPlayer(int arr[], int size){
    int sum = 0;
     for(int i=0; i<size; i++){
         sum += arr[i];
     }

     return maxValueForCurrentPlayerUtil(arr, size, 0, size-1, sum);

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
