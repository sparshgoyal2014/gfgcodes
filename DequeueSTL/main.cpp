#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> dq;

    dq.push_front(5);
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);

    for(int x: dq){
        cout << x << " ";
    }cout << endl;

    cout << dq.front() << " " << dq.back() << endl;

    auto it = dq.begin();
    it++;

    cout << *it << endl;
    it = dq.insert(it,23);
    cout << *it << endl;

    for(int i=0; i<dq.size(); i++){
        cout << dq[i] << " ";
    }cout << endl;

    dq[2] = 16;

    dq.end(); // It will return the pointer beyond the last element it does not include the last element

    return 0;
}
