#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct Stack{
    queue<int> q1, q2;

    int top(){
        return q1.front();
    }

    int size(){
        return q1.size();
    }

    int pop(){
        return q1.front();
    }

    void push(int data){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(data);

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }


};


int main() {

    return 0;
}
