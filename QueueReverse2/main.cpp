#include <iostream>
#include <stack>
#include <queue>

using namespace std;


// iterative
void reverseQueue(queue<int> &q){
    stack<int> s;
    while(q.empty() == false){
        s.push(q.front());
        q.pop();
    }

    while(s.empty() == false){
        q.push(s.top());
        s.pop();
    }

}

// Recursive
void recursiveReverse(queue<int> &q){
    if(q.empty()){
        return;
    }

    int x = q.front();
    q.pop();

    recursiveReverse(q);

    q.push(x);
}


int main() {

    return 0;
}
