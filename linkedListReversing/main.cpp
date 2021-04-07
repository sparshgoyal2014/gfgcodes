#include <iostream>
#include <vector>
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
    temp->next = NULL;
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = temp;
    return head;

}

// naive solution
Node* reverseLL(Node* head){
    vector<int> vector;
    for(Node* current = head; current != NULL; current = current->next){
        vector.push_back(current->key);
    }

    for(Node* current; current != NULL; current = current->next){
        current->key = vector.back();
        vector.pop_back();
    }

    return head;
}

// efficient approach
Node* reversingEfficient(Node* head){
    Node* current = head;
    Node* previous = NULL;

    while(current != NULL){
        Node* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;  // previous is new Head
}


int main() {

    return 0;
}
