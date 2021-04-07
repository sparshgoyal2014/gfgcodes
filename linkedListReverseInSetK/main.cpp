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

// recursive reverse in K sets

Node* recursiveReverseInK(Node* head, int k){
    Node* current = head;
    Node* next = NULL;
    Node* previous = NULL;

    int count = 0;

    while(current != NULL && count < k){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        count++;
    }

    if(next != NULL){
        Node* restHead = recursiveReverseInK(next, k);
        head->next = restHead;
    }

    return previous;  // previous is new head.
}

// iterative reversing in K sets
Node* iterativeReverseInK(Node* head, int k){
    Node* current = head;
    Node* previousFirst = NULL;

    bool isFirstPass = true;

    while(current != NULL){

        Node* previous = NULL;
        Node* first = current;

        int count = 0;

        while(current != NULL && count < k){
            Node* next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            count++;
        }

        if(isFirstPass){
            head = previous;
            isFirstPass = false;
        }else{
            previousFirst->next = previous;
        }

        previousFirst = first;
    }

    return head;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
