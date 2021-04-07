#include <iostream>
using namespace std;

int ceilIndexInTail(int tail[], int length, int x){

    int l = 0;
    int r = length-1;


    while(l < r){
        int mid = l + (r-l)/2;

        if(tail[mid] > x){
            r = mid;
        }else{
            l = mid+1;
        }
    }

    return r;
}

int longesetIncreasingSubsequence(int arr[], int size){
    int tail[size];
    tail[0] = arr[0];
    int length = 1;

    for(int i=1; i<size; i++){
        if(arr[i] > tail[length-1]){
            tail[length] = arr[i];
            length++;
        }else{
            int ceilIndex = ceilIndexInTail(tail, length, arr[i]);
            tail[ceilIndex] = arr[i];
        }
    }

    return length;

}

int main() {
    return 0;
}
