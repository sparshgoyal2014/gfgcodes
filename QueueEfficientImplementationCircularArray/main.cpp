#include <iostream>
using namespace std;

struct Queue{
    int capacity, size;
    int front, rear, *arr;

    Queue(int capacity){
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];

        front = 0;
        rear = 0;
    }

    bool isEmpty(){
        return size == 0;
    }

    bool isFull(){
        return size == capacity;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }else{
            return front;
        }
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }else{
            return (front+size-1)%capacity;
        }
    }

    void enqueue(int data){
        if(isFull()){
            return ;
        }

        int rear = getRear();
        rear = (rear+1)%capacity;
        size++;
        arr[rear] = data;
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }

        front = (front+1)%capacity;
        size--;
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
