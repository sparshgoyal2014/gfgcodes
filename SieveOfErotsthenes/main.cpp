#include <iostream>
using namespace std;

void printPrimeNumbers(int upperBound){
    int arr[upperBound-1];
    for(int i = 0; i<upperBound-1; i++){
        arr[i] = i+2;
    }

    bool flag = false;

    for(int i=0;i<upperBound-1; i++){
        if(flag)break;
        for(int j=i; j<upperBound-1; j++){

            if(arr[i] == -1){
                continue;
            }

            if((arr[j] % arr[i] == 0) && (arr[j] >= (arr[i] * arr[i]))){
                arr[j] = -1;
                continue;
            }

            if((arr[i] * arr[i]) > arr[upperBound-1])flag = true;
            if(flag)break;
        }
    }
    for(int i=0; i<upperBound-1; i++){
        if(arr[i] == -1)continue;
        else{
            cout << arr[i] << " ";
        }
    }
}


int main() {

    printPrimeNumbers(50);
    return 0;
}
