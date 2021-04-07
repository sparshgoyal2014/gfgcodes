#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

struct Queue{
    Node* front;
    Node* rear;

    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data){
        Node* temp = new Node(data);
        if(front == nullptr){
            front = temp;
            rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == nullptr){
            return;
        }

        Node* temp = front;

        front = front->next;

        if(front == nullptr){
            rear = nullptr;
        }

        delete temp;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
