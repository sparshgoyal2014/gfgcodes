#include <iostream>
using namespace std;

int removeDuplicates(int sortedArr[], int size){
    int resultSize = 1;
    for(int i=1; i<size; i++){
        if(sortedArr[i] != sortedArr[resultSize-1]){
            sortedArr[resultSize] = sortedArr[i];
            resultSize++;
        }
    }

    return resultSize;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
