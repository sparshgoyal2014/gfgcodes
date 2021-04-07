#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct TreeNode{
    TreeNode* left;
    TreeNode* right;

    int val;

    TreeNode(int val){
        this->left = nullptr;
        this->right = nullptr;

        this->val = val;
    }


};

vector<int> iterativeTreeTraversal(TreeNode* root){

    vector<int> result;

    if(root == nullptr){
        return result;
    }

    stack<TreeNode*> subRoots;

    subRoots.push(root);

    TreeNode* currRoot = root;


    while(subRoots.empty() == false){

        if(currRoot == nullptr){
            TreeNode* current = subRoots.top();
            subRoots.pop();

            result.push_back(current->val);
            currRoot = current->right;
        }else{
            currRoot = currRoot->left;
            subRoots.push(currRoot);
        }

    }










}


int main() {
    return 0;
}
