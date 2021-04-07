#include <bits/stdc++.h>
using namespace std;

double median(int arr1[], int size1, int arr2[], int size2){
    int begin = 0; int end = size1;  //assume arr1 is smaller than arr2

    while(begin <= end){
        int i1 = (begin + end)/2;
        int i2 = (size1 + size2 + 1)/2 - i1;

        int min1 = (i1 == size1) ? INT_MAX : arr1[i1];
        int max1  = (i1 == 0) ? INT_MIN : arr1[i1-1];
        int min2 = (i2 == size2) ? INT_MAX : arr1[i2];
        int max2  = (i2 == 0) ? INT_MIN : arr1[i2-1];

        if(max1 <= min2 && max2 <= min1){
            if((size1 + size2)%2 == 0){
                return ((double)max(max1, max2) + min(min1, min2))/2;
            }else{
                return (double)max(max1, max2);
            }
        }else if(max1 >= min2)end = i1-1;
        else{
            begin = i1+1;
        }
    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
