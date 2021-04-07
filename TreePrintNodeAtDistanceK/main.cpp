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

void printAtK(Node* root, int k){
    if(root == nullptr){
        return ;
    }

    if(k == 0){
        cout << root->data << " ";
    }else{
        printAtK(root->left, k-1);
        printAtK(root->right, k-1);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
