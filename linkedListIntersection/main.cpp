#include <iostream>
#include <unordered_set>
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


// method 1 O(m+n) time and O(m) aux. space
Node* intersectionLL(Node* head1, Node* head2){
    unordered_set<Node*> set;

    for(Node* current = head1; current != NULL; current = current = current->next){
        set.insert(current);
    }

    for(Node* current = head2; current != NULL; current = current->next){
        if(set.find(current) != set.end()){
            return current;
        }
    }

    return nullptr;
}

// method 2 o(m+n) time and o(1) aux. space
Node* intersectionLL2(Node* head1, Node* head2){
    int count1 = 0;
    int count2 = 0;

    for(Node* current = head1; current != nullptr; current = current->next){
        count1++;
    }

    for(Node* current = head2; current != nullptr; current = current->next){
        count2++;
    }

    int diff = abs(count1 - count2);

    if(count1 > count2){
        Node* current1 = head1;
        Node* current2 = head2;

        for(int i=0; i<diff; i++){
            current1 = current1->next;
        }

        while(current1 != nullptr && current2 != nullptr){
            if(current1 == current2){
                return current1;
            }
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    return nullptr;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
