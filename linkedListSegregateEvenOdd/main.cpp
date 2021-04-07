#include <iostream>
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

void displayLL(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

Node* segregateEvenOdd(Node* head){
    Node* es = nullptr;  // even start
    Node* ee = nullptr;  // even end
    Node* os = nullptr;  // odd start
    Node* oe = nullptr;  // odd end

    for(Node* current = head; current != nullptr; current = current->next){
        int x = current->data;
        if(x % 2 == 0){
            if(es == nullptr){
                es = current;
                ee = es;
            }else{
                ee->next = current;
                ee = current;
            }
        }else{
            if(os == nullptr){
                os = current;
                oe = os;
            }else{
                oe->next = current;
                oe = current;
            }
        }
    }

    if(os == nullptr || es == nullptr){
        return nullptr;
    }


    ee->next = os;
    oe->next = nullptr;
    return es;
}

int main() {
    cout << "hello World!" << endl;
    Node* head = new Node(5);
    head = insertEnd(head, 4);
    head = insertEnd(head, 3);
    head = insertEnd(head, 2);
    head = insertEnd(head, 7);
    head = insertEnd(head, 9);
    head = insertEnd(head, 10);
    head = insertEnd(head, 8);

    displayLL(head);
    head = segregateEvenOdd(head);
    displayLL(head);

    return 0;
}
