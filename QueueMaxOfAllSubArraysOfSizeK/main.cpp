#include <iostream>
#include <deque>

using namespace std;

void printMaxOfAllSubArraysOfsizek(int arr[], int size, int k){
    deque<int> dq;

    for(int i=0; i<k; i++){
        while(!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);
    }

    for(int i=k; i<size; i++){
        cout << arr[dq.front()] << " ";

        while(dq.empty() == false && dq.front() <= i-k){
            dq.pop_front();
        }

        while(dq.empty() == false && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);

    }

    cout << arr[dq.front()] << " ";
    cout << endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
