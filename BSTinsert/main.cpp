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

Node* insert(Node* root, int data){
    if(root == nullptr){
        Node* newNode = new Node(data);
        return newNode;
    }

    if(root->data < data){
        root->right = insert(root->right, data);
    }else if(root->data > data){
        root->left = insert(root->left, data);
    }

    return root;
}

// iterative solution

Node* insertIterative(Node* root, int data){

    if(root == nullptr){
        Node* newNode = new Node(data);
        return newNode;
    }

    Node* temp = root;

    while(temp != nullptr){
        if(temp->data == data){
            return root;
        }

        if(temp->data < data){
            if(temp->right != nullptr){
                temp = temp->right;
            }else{
                Node* newNode = new Node(data);
                temp->right = newNode;
            }
        }else{

            if(temp->left != nullptr){
                temp = temp->left;
            }else{
                Node* newNode = new Node(data);
                temp->left = newNode;
            }
        }
    }


    return root;




}

int main() {
    std::cout << "Hello, World!" << std::endl;


    return 0;
}
