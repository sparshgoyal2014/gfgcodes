#include <iostream>
using namespace std;


int firstOccurrence(int arr[], int x, int low, int high){
    int mid = low + (high - low)/2;

    if(low > high)return -1;

    ::display();
    display();

    if((mid == 0 || arr[mid-1] < x ) && arr[mid] == x)return mid;
    if(arr[mid] > x)return firstOccurrence(arr, x, low,mid-1);
    return firstOccurrence(arr, x, mid+1, high);
}


int lastOccurrence(int arr[], int x, int low, int high, int size){
    int mid = low + (high - low)/2;

    if(low > high)return -1;

    if((mid == size-1 || arr[mid+1] > x ) && arr[mid] == x)return mid;
    if(arr[mid] > x)return lastOccurrence(arr, x, low,mid-1, size);
    return lastOccurrence(arr, x, mid+1, high, size);
}

void display(){
    cout << "This is display funciton in global Scope" << endl;
}

int numberOfOccurrences(int arr[], int x, int size){
    int first = firstOccurrence(arr, x, 0, size-1);
    int last = lastOccurrence(arr, x, 0, size-1, size);

    return first + last;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
