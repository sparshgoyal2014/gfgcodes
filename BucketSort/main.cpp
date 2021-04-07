#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void bucketSort(int arr[], int size, int numberOfBuckets){
    int maxele = arr[0];

    //finding maxElement
    for(int i=0; i<size; i++){
        if(arr[i] >= maxele){
            maxele = arr[i];
        }
    }

    // fill the buckets
    maxele++;
    vector<int> bkt[numberOfBuckets];
    for(int i=0; i<size; i++){
        int bktIndex = (numberOfBuckets * arr[i])/maxele;
        bkt(bktIndex).pop_back(arr[i]);
    }

    // sort the items inside the buckets

    for(int i=0; i<numberOfBuckets; i++){
        sort(bkt[i].begin(), bkt[i].end());
    }

    // concat the bucket elements

    int index = 0;
    for(int i=0; i<numberOfBuckets; i++){
        for(int j=0; j<bkt[i].size(); j++){
            arr[index] = bkt[i][j];
        }
    }



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
