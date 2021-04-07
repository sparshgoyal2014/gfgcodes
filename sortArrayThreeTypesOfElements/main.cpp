#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void sortThreeTypes(int arr[], int size){
    int low = 0; int mid = 0; int high = size-1;

    while(arr[mid] <= high){
        switch (arr[mid]){
            case 0:
                swap(arr[mid], arr[low]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
