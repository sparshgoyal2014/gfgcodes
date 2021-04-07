#include <iostream>
#include <queue>
using namespace std;


void sortKSorted(int arr[], int size, int k){
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<=k; i++){
        pq.push(arr[i]);
    }


    int index = 0;
    for(int i=k+1; i<size; i++){
        arr[index] = pq.top();
        pq.pop();

        index++;

        pq.push(arr[i]);
    }

    while(pq.empty() == false){
        arr[index] = pq.top();
        pq.pop();
        index++;
    }



}


int main() {
    return 0;
}
