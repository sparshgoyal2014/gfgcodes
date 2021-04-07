#include <iostream>
#include <stack>
using namespace std;

int getMaxArea(int arr[], int size){
    int result = 0;
    stack<int> stk;

    int current = 0;

    for(int i=0; i<size; i++){
        while(stk.empty() == false && arr[stk.top()] >= arr[i]){
            int topEle = stk.top();
            stk.pop();

            current = arr[topEle]*(stk.empty() ? i : (i - stk.top() - 1));
            result = max(result, current);
        }

        stk.push(i);
    }

    while(stk.empty() == false){
        int topEle = stk.top();
        stk.pop();

        current = arr[topEle] * (stk.empty() ? size : (size - stk.top() - 1));
        result = max(result, current);
    }

    return result;
}

int main() {

    return 0;
}
