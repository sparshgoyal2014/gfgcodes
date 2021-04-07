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

Node* previous = nullptr;

Node* convertToDLL(Node* root){
    if(root == nullptr){
        return root;
    }
    Node* head = convertToDLL(root->left);

    if(previous == nullptr){
        head = root;
    }else{
        root->left = previous;
        previous->right = root;
    }

    previous = root;

    convertToDLL(root->right);

    return head;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
