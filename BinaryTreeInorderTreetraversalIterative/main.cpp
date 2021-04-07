#include <iostream>
#include <stack>
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

// iterative Inorder Traversal
void inorderTraversalIterative(Node* root){
    if(root == nullptr){
        return ;
    }

    stack<Node*> s;

    Node* current = root;

    while(current != nullptr || s.empty() == false){

        while(current != nullptr){
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout << current->data << " ";

        current = current->right;
    }

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
