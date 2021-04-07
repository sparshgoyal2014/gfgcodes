#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void missingRepeating(int arr[], int size){
    int missing = -1;
    int repeating = -1;

    for(int i=0; i<size; i++){
        if(arr[abs(arr[i]) - 1] < 0){
            repeating = abs(arr[i]);
//            break;
        }else{
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i] > 0){
            missing = i+1;
            break;
        }
    }

    cout << "missing : " << missing << " " << "Repeating : " << repeating << endl;
}

int main() {

    int arr[4] = {3,3,4,1};

    missingRepeating(arr, 4);


    return 0;
}
