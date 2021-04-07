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


void inorder(Node* root){
    if(root != nullptr){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preOrder(Node* root){
    if(root != nullptr){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root != nullptr){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
