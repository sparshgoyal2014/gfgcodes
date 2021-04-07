#include <iostream>
using namespace std;

int countBits(int arr[], int size){
    int count = 0;
    int result = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            count = 0;
        }else{
            count++;
            result = max(result, count);
        }
    }

    return result;

}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
