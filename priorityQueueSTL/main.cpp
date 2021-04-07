#include <iostream>
#include <queue>
using namespace std;

int main() {

    // priority queue is implemented using MAX HEAP

    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << pq.size() << endl;
    cout << pq.top() << endl;

    cout << "================================" << endl;
    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }cout << endl;


    // to use queue in opposite order like minimum element on the top of the heap.  // it is implemented using MIN HEAP

    cout << "-------- MIN Priority queue------------" << endl;

    priority_queue<int, vector<int>, greater<int>> minPq;

    minPq.push(10);
    minPq.push(15);
    minPq.push(5);

    cout << minPq.size() << endl;
    cout << minPq.top() << endl;

    cout << "================================" << endl;
    while(minPq.empty() == false){
        cout << minPq.top() << " ";
        minPq.pop();
    }cout << endl;


    // Priority queue using given vector or array


    cout << "-----------------Priority queue using vector--------------------" << endl;
    vector<int> vec;

    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(6);

    priority_queue<int> pq3(vec.begin(), vec.end());

    while(pq3.empty() == false){
        cout << pq3.top() << " ";
        pq3.pop();
    }cout << endl;

    cout << vec.size() << endl;


    cout << "-----------------Priority queue using array--------------------" << endl;


    int arr[9] = {5,4,3,2,1,6,9,7,8};

    priority_queue<int> pq4(arr, arr+9);


    while(pq4.empty() == false){
        cout << pq4.top() << " ";
        pq4.pop();
    }cout << endl;


    cout << arr[3] << endl;






    return 0;
}
