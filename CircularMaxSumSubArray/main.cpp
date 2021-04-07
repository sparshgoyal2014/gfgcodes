#include <iostream>
using namespace std;

int maxCircularSun(int arr[], int size){
    int result = arr[0];
    int result1 = arr[0];

    int maxCurrentSum = arr[0];
    for(int i=1; i<size; i++){
        maxCurrentSum = max(maxCurrentSum, maxCurrentSum+arr[i]);
        result1 = max(maxCurrentSum, result);
    }

    int result2 = arr[0];
    int minCurrentSum = arr[0];

    for(int i=1; i<size; i++){
        minCurrentSum = min(minCurrentSum, minCurrentSum+arr[i]);
        result2 = min(result2, minCurrentSum);
    }

    int totalSum = 0;
    for(int i=0; i<size; i++){
        totalSum += arr[i];
    };

    result = max(result1, (totalSum - result2));
    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
