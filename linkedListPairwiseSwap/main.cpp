#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

Node* insertEnd(Node* head, int data){
    Node* current = head;

    Node* temp = new Node(data);

    while(current->next != nullptr){
        current = current->next;
    }
    current->next = temp;

    return head;
}

// method 1 - swapping data
Node* pairwiseSwap(Node* head){  // only data is swapped;
    Node* current = head;
    while(current != nullptr && current->next != nullptr){
        swap(current->data, current->next->data);
        current = current->next->next;
    }

    return head;
}

// method 2 - swapping actual nodes
Node* swapNodes(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* current = head->next->next;
    Node* previous = head;
    head = head->next;
    head->next = previous;

    while(current != nullptr && current->next != nullptr){
        previous->next = current->next;
        previous = current;
        Node* next = current->next->next;
        current->next->next = current;
        current = next;
    }

    previous->next = current;
    return head;
}

void displatyLL(Node* head){
    Node* current = head;

    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}



int main() {

    Node* head = new Node(2);
    insertEnd(head, 5);
    insertEnd(head, 6);
    insertEnd(head, 9);
    insertEnd(head, 11);
    insertEnd(head, 12);
    insertEnd(head, 15);
    insertEnd(head, 19);

    displatyLL(head);
    head = swapNodes(head);
    displatyLL(head);
    displatyLL(swapNodes(head));

    return 0;
}
