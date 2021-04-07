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

int getheight(Node* root){
    if(root == nullptr){
        return 0;
    }

    return max(getheight(root->left), getheight(root->right)) + 1;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
