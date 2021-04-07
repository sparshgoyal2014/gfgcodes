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

bool followChildSum(Node* root){
    if(root == nullptr){
        return true;
    }

    if(root->left == nullptr && root->right == nullptr){
        return true;
    }

    int sum = 0;

    if(root->left != nullptr){
        sum += root->left->data;
    }

    if(root->right != nullptr){
        sum += root->right->data;
    }

    return (root->data == sum && followChildSum(root->left) && followChildSum(root->right));
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
