#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Interval{
    int start;
    int end;
};

bool compare(Interval i1, Interval i2){
    return i1.start <= i2.start;
}

bool checkOverlappingIntervals(Interval i1, Interval i2){
    if(i1.start <= i2.start && i2.start <= i1.end){
        return true;
    }

    if(i2.start <= i1.start && i1.start <= i2.end){
        return true;
    }

    return false;
}

void mergeOverlapping(Interval arr[], int size){
    sort(arr, arr+size, compare);

    int result = 0;

    for(int i=1; i<size; i++){
        if(arr[result].end >= arr[i].start){
            arr[result].start = min(arr[result].start, arr[i].start);
            arr[result].end = max(arr[result].end, arr[i].end);
        }else{
            result++;
            arr[result] = arr[i];
        }
    }

    for(int i=0; i<=result; i++){
        cout << "(" <<  arr[i].start << " , " << arr[i].end << ")" << " ";
    }

    cout << endl;

}

int main() {
    Interval arr[] = {{5,10}, {3,15}, {18,30}, {2,7}};
    mergeOverlapping(arr, 4);

    return 0;
}
