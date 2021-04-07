#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data;
        left = nullptr;
        right = nullptr;
    }
};


//recursive solution
bool isPresent(Node* root, int key){
    if(root == nullptr){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(root->data < key){
        return isPresent(root->right, key);
    }

    if(root->data > key){
        return isPresent(root->left, key);
    }

    return false;
}

// iterative solution  // please not that iterative solutions for simple binary trees require ques or stack(other containers) ot store all nodes at the particular level , so that in future if we need them thy can be accessed from these containers
                       // In BST there is no need of these queues or stacks because only one node is required at a particular level in case of a search functions


bool isPresentIterative(Node* root, int key){
    Node* temp = root;

    if(temp == nullptr){
        return false;
    }

    while(temp != nullptr){
        if(temp->data == key){
            return true;
        }

        if(temp->data < key){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }

    return false;
}


int main() {

    return 0;
}
