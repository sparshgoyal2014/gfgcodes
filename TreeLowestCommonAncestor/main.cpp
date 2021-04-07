#include <iostream>
#include <vector>
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

bool path(Node* root, int node, vector<Node*> &vec){
    if(root == nullptr){
        return false;
    }

    vec.push_back(root);

    if(root->data == node){
        return true;
    }

    if(path(root->left, node, vec) || path(root->right, node, vec)){
        return true;
    }

    vec.pop_back();

    return false;

}


Node* lca(Node* root, int n1, int n2){
    vector<Node*> path1, path2;

    if(path(root, n1, path1) == false || path(root, n2, path2) == false){
        return nullptr;
    }

    for(int i=1; i<path1.size() && i < path2.size(); i++){
        if(path1[i] != path2[i]){
            return path1[i-1];
        }
    }

    return nullptr;

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
