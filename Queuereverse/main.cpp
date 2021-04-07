#include <iostream>
#include <queue>
#include <stack>

using namespace std;



// test
void reverseQueue(queue<int> q){  // it is pass by value  // If you do this copy of the whole queue is passed and any changes will remained in the copied queue

    if(q.empty()){
        return;
    }

    int x = q.front();
    q.pop();
    reverseQueue(q);

    q.push(x);

    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;


}



int main() {

    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    reverseQueue(q);

    return 0;
}
