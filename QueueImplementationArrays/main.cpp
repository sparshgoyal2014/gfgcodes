#include <iostream>
using namespace std;

struct Queue{
    int capacity, size;
    int* arr;

    Queue(int capacity){
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];
    }

    bool isFull(){
        return size == capacity;
    }

    bool isEmpty(){
        return size == 0;
    }

    void enqueue(int data){
        if(isFull()){
            return;
        }else{
            arr[size] = data;
            size++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }else{
            for(int i=0; i<size-1; i++){
                arr[i] = arr[i+1];
            }

            size--;
        }
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }else{
            return 0;
        }
    }

    int getBack(){
        if(isEmpty()){
            return -1;
        }else{
            return size-1;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
