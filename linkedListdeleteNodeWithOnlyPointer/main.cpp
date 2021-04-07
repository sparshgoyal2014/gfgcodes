#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
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

void deleteNode(Node* ptr){  // only pointer to the node which need to be deleted is given
    Node* temp = ptr->next;
    ptr->data = ptr->next->data;  // first copy the data of the next node to the previous node
    ptr->next = ptr->next->next;  // then delete the next node by breaking the link between them
    delete temp;  // delete from the memory;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
