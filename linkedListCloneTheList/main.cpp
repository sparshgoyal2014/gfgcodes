#include <iostream>
#include <unordered_map>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this->data = data;
        next = nullptr;
        random = nullptr;
    }
};

Node* insertEnd(Node* head, int data){
    Node* temp = new Node(data);

    Node* current = head;
    while(current->next != nullptr){
        current = current->next;
    }

    current->next = temp;
    return head;
}

Node* cloneLinkedList(Node* head1){
    unordered_map<Node*, Node*> map;
    for(Node* current = head1; current != nullptr; current = current->next){
        map[current] = new Node(current->data);
    }

    for(Node* current = head1; current != nullptr; current = current->next){
        Node* cloneCurrent = map[current];
        cloneCurrent->next = map[current->next];
        cloneCurrent->random = map[current->random];
    }

    Node* head2 = map[head1];

    return head2;
}


int main() {

    return 0;
}
