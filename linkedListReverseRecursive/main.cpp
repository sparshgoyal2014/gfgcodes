#include <iostream>
using namespace std;

struct Node{
    int key;
    Node* next;

    Node(int key){
        this->key = key;
        next = NULL;
    }
};

Node* insertEnd(Node* head, int key){
    Node* temp = new Node(key);

    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = temp;
    return head;
}

// recursive reverse
Node* recursiveReverse(Node* head){
    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        return head;
    }

    Node* restHead = recursiveReverse(head->next);
    Node* restTail = head->next;
    restTail->next = head;
    head->next = NULL;

    return restHead;
}

// recursive reverse 2
Node* recursiveReverse(Node* current, Node* previous){
    if(current == NULL){
        return previous;
    }

    Node* next = current->next;
    current->next = previous;

    return recursiveReverse(next, current)
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
