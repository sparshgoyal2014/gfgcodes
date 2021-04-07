#include <iostream>
#include <climits>

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

int getMaximum(Node* root){
    if(root == nullptr){
        return INT_MIN;
    }

    return max(root->data, max(getMaximum(root->left), getMaximum(root->right)));
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
