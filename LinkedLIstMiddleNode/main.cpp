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


// Naive approach

void middleNode(Node* head){
    if(head == NULL){
        return;
    }

    int count = 0;
    Node* current = head;

    for(current = head; current != NULL; current = current->next){
        count++;
    }

    current = head;

    for(int i=0; i<count/2; i++){
        current = current->next;
    }

    cout << current->key<< endl;

}

// efficient approach

void printMiddle(Node* head){
    if(head == NULL){
        return ;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->key << endl;
}


int main() {

    Node* head = NULL;
    head = insertBegin(head, 5);
    head = insertBegin(head, 10);
    head = insertBegin(head, 13);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);



    return 0;
}
