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

Node* insertBegin(Node* head, int key){
    Node* temp = new Node(key);
    temp->next = head;

//    Node node = Node(key);
//    Node* temp2 = &node;
//    return temp2  // we can not use stack memory allocation as it will go out of scope after function return and Pointer temp2 will become dangling as it will point to nothing as node will be destroyed after function is done woth its execution


    return temp;
}

void printList(Node* head){
    while(head != NULL){
        cout << head->key << " ";
        head = head->next;
    }

    cout << endl;
}

Node* insertEnd(Node* head, int key){

    if(head == NULL){
        return new Node(key);
    }
    Node* temp = new Node(key);
    temp->next = NULL;
    Node* current = head;

    while(current->next != NULL){
        current = current->next;
    }

    current->next = temp;
    return head;
}

int main() {
    Node* head = NULL;
    head = insertBegin(head, 5);
    head = insertBegin(head, 10);
    head = insertBegin(head, 13);
    head = insertBegin(head, 20);


    printList(head);
    printList(head);


    return 0;
}
