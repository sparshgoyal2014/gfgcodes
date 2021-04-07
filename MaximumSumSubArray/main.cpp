#include <iostream>
using namespace std;

int maxSum(int arr[], int size){
    int result = arr[0];
    int maxCurrentSum = arr[0];

    for(int i=1; i<size; i++){
        maxCurrentSum = max(maxCurrentSum, maxCurrentSum+arr[i]);
        result = max(maxCurrentSum, result);
    }

    return result;
}

void display(){
    cout << "This is Display Function" << endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    cout << !display << endl;
    return 0;
}
