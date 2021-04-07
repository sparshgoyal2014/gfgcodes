#include <iostream>
#include <stack>
using namespace std;

void previousGreater(int arr[], int size){
    stack<int> stk;

    stk.push(arr[0]);

    cout << -1 << " ";

    for(int i=1; i<size; i++){
        while(!stk.empty() && arr[stk.top()] <= arr[i]){
            stk.pop();
        }

        int prevGreater = (stk.empty()) ? -1 : arr[stk.top()];
        cout << prevGreater << " ";
        stk.push(i);
    }
}

// next greater
void nextGreaterElement(int arr[], int size){
    stack<int> stk;

    stk.push(arr[size-1]);
    cout << -1 << " ";

    for(int j = size-2; j>=0; j--){
        while(!stk.empty() && arr[stk.top()] <= arr[j]){
            stk.pop();
        }

        int nextGreater = stk.empty() ? -1 : arr[stk.top()];
        cout << nextGreater << " ";
        stk.push(j);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
