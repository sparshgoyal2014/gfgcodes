#include <iostream>
using namespace std;

int evenOdd(int arr[], int size){
    int result = 1;
    int currentResult = 1;
    for(int i=0; i<size-1; i++){
        if((arr[i] % 2 == 0 && arr[i+1] % 2 != 0) || (arr[i+1] % 2 == 0 && arr[i] % 2 != 0)){
            currentResult++;
            result = max(result, currentResult);
        }else{
            currentResult = 1;
        }
    }

    return result;

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
