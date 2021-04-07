#include <iostream>
#include <stack>

using namespace std;

// naive solution
int largestArea(int arr[], int size){
    int result = 0;
    for(int i=0; i<size; i++){
            int current = arr[i];
            for(int j=i+1; j<size; j++){
                if(arr[j] >= arr[i]){
                    current += arr[i];
                }else{
                    break;
                }
            }

            for(int j=i-1; j>=0; j--){
                if(arr[j] >= arr[i]){
                    current += arr[i];
                }else{
                    break;
                }
            }

            result = max(result, current);
    }

    return result;
}


void previousSmaller(int arr[], int prevSmaller[], int size){
    stack<int> stk;

    stk.push(arr[0]);
    prevSmaller[0] = -1;

    for(int i=1; i<size; i++){
        while(!stk.empty() && arr[stk.top()] >= arr[i]){
            stk.pop();
        }

        int justSmall = (stk.empty()) ? -1 : stk.top();
        prevSmaller[i] = justSmall;
        stk.push(i);
    }
}

void nextSmaller(int arr[], int nextSmall[], int size){
    stack<int> stk;

    stk.push(arr[size-1]);
    nextSmall[0] = size;

    for(int j = size-2; j>=0; j--){
        while(!stk.empty() && arr[stk.top()] >= arr[j]){
            stk.pop();
        }

        int nextSmallerElement = stk.empty() ? -1 : stk.top();
        nextSmall[j] = nextSmallerElement;
        stk.push(j);
    }
}

// efficient solution
int largestAreaEfficient(int arr[], int size){
    int result = 0;

    int prevSmaller[size];
    int nextSmall[size];

    previousSmaller(arr, prevSmaller, size);
    nextSmaller(arr, nextSmall, size);

    for(int i=0; i<size; i++){
        int current = arr[i];
        current += (nextSmall[i] - i -1)*arr[i];
        current += (i - prevSmaller[i] - 1)*arr[i];
        result = max(result, current);
    }

    return result;

}





int main() {
    std::cout << "Hello, World!" << std::endl;

    int x = int(4);

    return 0;
}
