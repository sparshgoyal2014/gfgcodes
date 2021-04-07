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


int preIndex = 0;
Node* constructTree(int in[], int pre[], int is, int ie){
    if(is > ie){
        return nullptr;
    }

    Node* root = new Node(pre[preIndex]);
    preIndex++;


    int inIndex = 0;

    for(int i=is; i<=ie; i++){
        if(in[i] == root->data){
            inIndex = i;
            break;
        }
    }

    root->left = constructTree(in, pre, is, inIndex-1);
    root->right = constructTree(in, pre, inIndex=1, ie);

    return root;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
