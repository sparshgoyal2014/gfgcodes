#include <iostream>
#include "LinkedList.h"
using namespace std;

void detectRemoveLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            break;
        }
    }

    if(slow != fast){
        return;
    }

    slow = head;

    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = NULL;
    return;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
