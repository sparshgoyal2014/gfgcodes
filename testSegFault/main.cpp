#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next = nullptr;
    Node(int data){
        this->data = data;
    }
};

Node* insertEnd(Node* head, int data){
    Node* current = head;

    while(current->next != nullptr){
        current = current->next;
    }

    Node* temp = new Node(data);
    current->next = temp;

    return head;
}

Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node* current = head;
    Node* temp = head->next;


    while(current->next != nullptr && temp != nullptr){
        while(current->data == temp->data  && temp != nullptr){
            temp = temp->next;
        }

        current->next = temp;
        current = current->next;
        temp = temp->next;
    }

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

int main(){

//    Node* head = new Node(5);
//    head = insertEnd(head, 4);
//    head = insertEnd(head, 3);
//
//    Node* current = head;
//
//    while(current != nullptr){
//        cout << current->data << " ";
//        current = current->next;
//    }
//
//    cout << endl;
//
//
//    cout << " ============================ " << endl;
//    cout << current->next << " ";

    Node* head = new Node(2);
    head = insertEnd(head, 2);
    head = insertEnd(head, 2);
    head = insertEnd(head, 2);

    head = removeDuplicates(head);

    displayLL(head);



    return 0;

}