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
    temp->next = NULL;
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = temp;
    return head;

}

//Method 1
void nthNodeFromLast(Node* head, int n){
    int length = 0;
    for(Node* current; current != NULL; current = current->next){
        length++;
    }

    if(length < n){
        return ;
    }

    Node* current = head;
    for(int i=0; i<length - n +1; i++){
        current = current->next;
    }

    cout << current->key << endl;
}


// method 2 using two pointers

void printNthNodeFromLast(Node* head, int n){
    if(head == NULL){
        return ;
    }

    Node* first = head;
    for(int i=0; i<n; i++){
        if(first == NULL){
            return ;
        }
        first =  first->next;
    }

    Node* second = head;

    while(first != NULL){
        second = second->next;
        first = first->next;
    }

    cout << second->key << " " << endl;
    return ;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


