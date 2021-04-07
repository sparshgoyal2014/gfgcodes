#include <iostream>
using namespace std;

//Iterative binary Seach
int binarySearch(int arr[], int size, int x){
    int low = 0;
    int high = size-1;


    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == x){
            return mid;
        }else if(x < arr[mid]){
            high = mid-1;
        }else if(x > arr[mid]){
            low = mid+1;
        }
    }

    return -1;
}

// recursive Binary Search
int recBinarySearch(int arr[], int low, int high, int x){
    if(high >= low){
        int mid = low + (high-low)/2;

        if(arr[mid] == x){
//            return mid;
        }else if(x < arr[mid]){
            return recBinarySearch(arr, low, mid-1, x);
        }else{
            return recBinarySearch(arr, mid+1, high, x);
        }
    }

    return -1;

}

int testFunction(){}

int main() {

    int arr[] = {1,2,3,4,5};
    cout << recBinarySearch(arr, 0, 4, 2) << endl;

    cout << testFunction() << endl;
    cout << testFunction() << endl;

    return 0;
}
