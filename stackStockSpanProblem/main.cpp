#include <iostream>
#include <stack>

using namespace std;

void stackSpan(int arr[], int size){
    stack<int> stk;
    stk.push(0);

    for(int i=1; i<size; i++){
        while(stk.empty() == false && arr[stk.top()] <= arr[i]){
            stk.pop();
        }

        int span = stk.empty() ? i+1 : i - stk.top();
        cout << span << " ";
        stk.push(i);
    }
}

int main() {

    return 0;
}
