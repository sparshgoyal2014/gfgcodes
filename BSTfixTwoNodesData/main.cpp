#include <iostream>
#include <climits>

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

// fix two elements in sorted array

void fixArray(int arr[], int size){
    int previous = INT_MIN;
    int first = -1;
    int second = -1;

    for(int i = 0; i<size; i++){
        if(arr[i] < previous){
            if(first == -1){
                first = previous;
            }

            second = arr[i];
        }

        previous = arr[i];
    }

}

Node* previous = nullptr, *first = nullptr, *second = nullptr;  // we can also pass pointer to the pointer or reference to the pointer to share the value of pointer to all the function calls
void fixBST(Node* root){
    if(root == nullptr){
        return ;
    }

    fixBST(root->left);

    if(previous != nullptr && root->data < previous->data){
        if(first == nullptr){
            first = previous;
        }

        second = root;
    }

    previous = root;

    fixBST(root->right);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
