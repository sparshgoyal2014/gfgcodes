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

int getHeight(Node* root){
    if(root == nullptr){
        return 0;
    }

    return max(getHeight(root->left), getHeight(root->right)) + 1;
}


// Naive solution // O(n^2) time complexity
bool isBalanced(Node* root){
    if(root == nullptr){
        return true;
    }

    int lh = getHeight(root->left);
    int rh = getHeight(root->right);

    return (abs(lh - rh) >= 1 && isBalanced(root->left) && isBalanced(root->right));
}


// efficient

int isBalancedEfficient(Node* root){
    if(root == nullptr){
        return 0;
    }

    int lh = isBalancedEfficient(root->left);
    if(lh == -1){
        return -1;
    }

    int rh = isBalancedEfficient(root->right);
    if(rh == -1){
        return -1;
    }

    if(abs(lh - rh) > 1){
        return -1;
    }

    return max(lh, rh) + 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    int  arr[] = {1,2,3};
    return 0;
}
