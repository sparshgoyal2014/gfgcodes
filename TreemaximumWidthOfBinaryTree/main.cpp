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

int maxWidth(Node* root){
    if(root == nullptr){
        return 0;
    }

    queue<Node*> q;
    q.push(root);

    int result = 0;

    while(q.empty() == false){
        int qSize = q.size();
        result = max(result, qSize);

        for(int i=0; i<qSize; i++){
            Node* current = q.front();
            q.pop();

            if(current->left != nullptr){
                q.push(current->left);
            }

            if(current->right != nullptr){
                q.push(current->right);
            }

        }
    }

    return result;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
