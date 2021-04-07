#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.second > p2.second;
}

int maxProfitJobSequencing(pair<int, int> arr[], int size){  // first of pair ---  job deadline and second of pair --- profit of the job
    sort(arr, arr+size, comp);

    bool freeSlot[size];

    for(int i=0; i<size; i++){
        freeSlot[i] = true;
    }

    int result = 0;

    int slot = arr[0].first-1;

    for(int j = slot; j>=0; j--){
        if(freeSlot[j] == true){
            freeSlot[j] = false;
            result += arr[0].second;
            break;
        }
    }


    for(int i=1; i<size; i++){
        for(int j=arr[i].first - 1; j>=0; j--){
            if(freeSlot[j] == true){
                freeSlot[j] = false;
                result += arr[i].second;
                break;
            }
        }
    }

}

class Animal{
    Animal(){

    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;


    return 0;
}
