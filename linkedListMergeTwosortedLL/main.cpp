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

Node* insertEnd(Node* head, int data){
    Node* temp = new Node(data);

    Node* current = head;
    while(current->next != nullptr){
        current = current->next;
    }

    current->next = temp;
    return head;
}

void displayLL(Node* head){
    Node* current = head;

    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

Node* mergeTwoSortedLL(Node* head1, Node* head2){

    if(head1 == nullptr){
        return head2;
    }

    if(head2 == nullptr){
        return head1;
    }

    Node* previous = nullptr;
    Node* current1 = head1;
    Node* current2 = head2;

    Node* head = nullptr;
    if(head1->data < head2->data){
        previous = head1;
        current1 = current1->next;
        head = head1;
    }else{
        previous = head2;
        current2 = current2->next;
        head = previous;
    }

    while(current1 != nullptr && current2 != nullptr){
        if(current1->data < current2->data){
            previous->next = current1;
            previous = current1;
            current1 = current1->next;
        }else{
            previous->next = current2;
            previous = current2;
            current2 = current2->next;
        }
    }

    if(previous->next == nullptr && current2 == nullptr){
        previous->next = current1;
    }else if(previous->next == nullptr && current1 == nullptr){
        previous->next = current2;
    }

    return head;
}


int main() {
    Node* head1 = new Node(2);
    head1 = insertEnd(head1, 5);
    head1 = insertEnd(head1, 7);
    head1 = insertEnd(head1, 9);
    head1 = insertEnd(head1, 13);
    head1 = insertEnd(head1, 15);

    Node* head2 = new Node(3);
    head2 = insertEnd(head2, 4);
    head2 = insertEnd(head2, 6);
    head2 = insertEnd(head2, 8);

    displayLL(head1);
    displayLL(head2);


    Node* head = mergeTwoSortedLL(head1, head2);
    displayLL(head);

    return 0;
}
