#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    int lCount ;

    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;

        lCount = 0;
    }
};

int kthSmallest(Node* root, int k){
    if(root == nullptr){
        return -1;
    }


    if(k == root->lCount + 1){
        return root->data;
    }
    if(k < root->lCount + 1){
        return kthSmallest(root->left, k);
    }

    if(k > root->lCount + 1){
        return kthSmallest(root->right, k - root->lCount - 1);
    }
}


int main() {
    return 0;
}
