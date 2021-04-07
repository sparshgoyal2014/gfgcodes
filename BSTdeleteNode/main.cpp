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

Node* getInSuccessor(Node* root){
    Node* current = root;
    current = current->right;
    while(current != nullptr && current->left != nullptr){
        current = current->left;
    }

    return current;
}

Node* deleteNode(Node* root, int data){
    if(root == nullptr){
        return root;
    }

    if(root->data > data) {
        root->left = deleteNode(root->left, data);
    }else if(root->data < data){
        root->right = deleteNode(root->right, data);
    }else{
        if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;

        }else if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;

        }else{

            Node* inSucc = getInSuccessor(root);
            root->data = inSucc->data;
            root->right = deleteNode(root->right, inSucc->data);
        }

        return root;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
