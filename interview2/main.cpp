#include <iostream>
//delete a node from linked list
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(){
        data = 0;
        next = nullptr;
    }

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

Node* deleteNode(Node* head, int k){

    if(head == nullptr){
        return nullptr;
    }

    if(head->data == k){
        Node* temp = head;
        head = temp->next;
        delete temp;

        return head;
    }

    Node* curr = head;
    Node* previous = nullptr;
    while(curr != nullptr && curr->data != k){
        previous = curr;
        curr = curr->next;
    }

    if(curr == nullptr){
        return head;
    }

    previous->next = curr->next;

    delete curr;

    return head;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
