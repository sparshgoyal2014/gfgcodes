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


//method 1
void levelOrderLineByLine(Node* root){
    if(root == nullptr){
        return ;
    }

    queue<Node*> q;

    q.push(root);
    q.push(nullptr);

    while(q.size() > 1){
        Node* current = q.front();
        q.pop();

        if(current == nullptr){
            cout << endl;
            q.push(nullptr);
            continue;
        }

        cout << current->data << " ";

        if(current->left != nullptr){
            q.push(current->left);
        }

        if(current->right != nullptr){
            q.push(current->right);
        }
    }

}


//method 2

void levelOrderLineByLine2(Node* root){
    if(root == nullptr){
        return ;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int qSize = q.size();
        for(int i=0; i<qSize; i++){
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

        cout << endl;
    }

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
