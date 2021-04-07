#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(20);
    root->left->right = new Node(23);
    root->right->left = new Node(16);


    Node* root2 = nullptr;   // There is no tree  // or There is nothing in the tree // empty tree;
    return 0;
}
