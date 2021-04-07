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

// recursive Solution
int maxLevel = 0;
void printLeft(Node* root, int level){
    if(root == nullptr){
        return ;
    }

    if(maxLevel < level){
        cout << root->data << " ";
        maxLevel = level;
    }

    printLeft(root->left, level+1);
    printLeft(root->right, level+1);
}

void printLeftView(Node* root){
    printLeft(root, 1);
}


// Iterative Solution
void printLeftViewIterative(Node* root){
    if(root == nullptr){
        return ;
    }

    queue<Node*> q;

    q.push(root);

    while(q.empty() == false){
        int qSize = q.size();

        for(int i=0; i<qSize; i++){
            Node* current = q.front();
            q.pop();
            if(i == 0){
                cout << current->data << " ";
            }

            if(current->left != nullptr){
                q.push(current->left);
            }

            if(current->right != nullptr){
                q.push(current->right);
            }
        }
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
