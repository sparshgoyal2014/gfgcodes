#include <iostream>
#include <map>
#include <queue>
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

void verticalTraversal(Node* root){
    if(root == nullptr){
        return ;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    map<int, vector<int>> map;

    while(q.empty() == false){
        int qSize = q.size();

        for(int i=0; i<qSize; i++){
            auto current = q.front();
            q.pop();
            int hz = current.second;

            (map[hz]).push_back(current.first->data);

            if(current.first->left != nullptr){
                q.push({current.first->left, hz-1});
            }

            if(current.first->right != nullptr){
                q.push({current.first->right, hz+1});
            }
        }
    }

    for(auto x : map){
        for(int i=0; i<x.second.size(); i++){
            cout << x.second[i] << " ";
        }

        cout << endl;
    }

}


int main() {

    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    verticalTraversal(root);


    return 0;
}
