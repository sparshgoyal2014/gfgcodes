#include <iostream>
#include <queue>
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


// method 1 using 1 stack and 1 queue
void spiralTraversal(Node* root){
    if(root == nullptr){
        return ;
    }

    stack<Node*> s;

    queue<Node*> q;
    q.push(root);

    bool reverse = false;

    while(q.empty() == false){
        int qSize = q.size();

        for(int i=0; i<qSize; i++){
            Node* current = q.front();
            q.pop();

            if(reverse){
                s.push(current);
            }else{
                cout << current->data << " ";
            }

            if(current->left != nullptr){
                q.push(current->left);
            }

            if(current->right != nullptr){
                q.push(current->right);
            }

        }

        if(reverse){

            while(s.empty() == false){
                cout << s.top()->data << " ";
                s.pop();
            }

        }

        reverse = !reverse;
        cout << endl;
    }

}

// method 2 using 2 stacks

void printSpiral(Node* root){
    if(root == nullptr){
        return ;
    }

    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(root);

    while(s1.empty() == false || s2.empty() == false){



        while(s1.empty() == false){
            Node* current = s1.top();
            s1.pop();
            cout << current->data << " ";

            if(current->left != nullptr){
                s2.push(current->left);
            }


            if(current->right != nullptr){
                s2.push(current->right);
            }

        }

        cout << endl;

        while(s2.empty() == false){
            Node* current = s2.top();
            s2.pop();
            cout << current->data << " ";

            if(current->right != nullptr){
                s1.push(current->right);
            }


            if(current->left != nullptr){
                s1.push(current->left);
            }
        }

        cout << endl;


    }


}



















int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
