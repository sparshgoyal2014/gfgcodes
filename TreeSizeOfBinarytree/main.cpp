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

int getSize(Node* root){  // size :- No. of nodes
    if(root == nullptr){
        return 0;
    }

    return 1+getSize(root->left)+getSize(root->right);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
