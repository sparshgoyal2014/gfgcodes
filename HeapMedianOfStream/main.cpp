#include <iostream>
#include <queue>
using namespace std;


void prindMedianOfStream(int arr[], int size){
    priority_queue<int> s;   // s is max heap
    priority_queue<int, vector<int>, greater<int>> g;   // g is min heap

    s.push(arr[0]);

    for(int i=1; i<size; i++){
        int x = arr[i];

        if(s.size() > g.size()){
            if(s.top() > x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            cout << (double)(s.top() + g.top()) / 2 << " ";
        }else{
            if(s.top() >= x){
                s.push(x);
            }else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout << s.top() << " ";
        }
    }
    cout << endl;
}


int main() {

    return 0;
}
