//
// Created by spars on 5/21/2020.
//

#ifndef LINKEDLISTREMOVINGLOOP_LINKEDLIST_H
#define LINKEDLISTREMOVINGLOOP_LINKEDLIST_H

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

#endif //LINKEDLISTREMOVINGLOOP_LINKEDLIST_H
