#include <iostream>
#include <stack>

using namespace std;

class TwoStacks{
private:
    int* arr;
    int capacity;
    int top1;
    int top2;

public:

    TwoStacks(int n){
        capacity = n;
        top1 = -1;
        top2 = capacity;
        arr = new int[capacity];
    }

    void push1(int data){
        if(top1 < top2-1){
            top1++;
            arr[top1] = data;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void push2(int data){
        if(top1 < top2-1){
            top2--;
            arr[top2] = data;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop1(){
        if(top1 > 0){
            int temp = arr[top1];
            top1--;
            return ;
        }else{
            exit(1);
        }
    }

    void pop2(){
        if(top2 < capacity){
            int temp = arr[top2];
            top2++;
            return ;
        }else{
            exit(1);
        }
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
