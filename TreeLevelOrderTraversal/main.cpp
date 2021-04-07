#include <iostream>
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

void levelOrderPrinting(Node* root){
    if(root == nullptr){
        return ;
    }

    queue<Node*> q;
    q.push(root);

    while(q.empty() == false){
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if(current->left != nullptr){
            q.push(current->left);
        }

        if(current->right != nullptr){
            q.push(current->right);
        }
    }


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
