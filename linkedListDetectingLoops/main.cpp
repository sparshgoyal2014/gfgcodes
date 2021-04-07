#include <iostream>
#include <unordered_set>

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


// Detecting Loops
/*
 * Method 1: Naive (O(n^2))
 * Method 2; changing the Node structure : add one more field to the struct Node "bool visited;"
 * method 3: creating temp node // It changes the whole linked list it is super destructive algorithm
 * method 4: use hashing
 * method 5: Floyd cycle
 */

// method 3
bool detectLoop(Node* head){
    Node* current = head;
    Node* temp = new Node(0);
    while(current != NULL){
        if(current->next == NULL){
            return false;
        }

        if(current->next == temp){
            return true;
        }

        Node* currentNext = current->next;
        current->next = temp;
        current = currentNext;
    }

    return false;
}


// Method 4 using hashing  // O(n) time and O(n) aux. space
bool checkLoop(Node* head){
    unordered_set<Node*> set;

    Node* current = head;

    while(current != NULL){
        if(set.find(current) != set.end()){
            return true;
        }
        set.insert(current);

        current = current->next;
    }

    return false;
}

// method 5: floyd cycle

bool detectLoopFloyd(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
