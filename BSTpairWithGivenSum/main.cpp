#include <iostream>
#include <unordered_set>
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


// method 1:  step:1 do inOrder traversal, store all elements in the array since inorder traversal of BST will give elements in sorted order so we can apply two pointer approach to find the sun



// method 2 use hashing   Note: This approach can also be applied to binary tree it does not depend on the fact that the tree should be BST
bool isPairSum(Node* root, int sum, unordered_set<int> &set){
    if(root == nullptr){
        return false;
    }

    if(isPairSum(root->left, sum, set)){
        return true;
    }

    if(set.find(sum - root->data) != set.end()){
        return true;
    }

    set.insert(root->data);

    if(isPairSum(root->right, sum, set)){
        return true;
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
