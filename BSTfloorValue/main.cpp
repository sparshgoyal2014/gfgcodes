#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
    }
};


// iterative solution
Node* floor(Node* root, int data){
    if(root == nullptr){
        return nullptr;
    }

    if(root->data == data){
        return root;
    }

    Node* current = root;
    Node* result = nullptr;

    while(current != nullptr){
        if(current->data > data){
            current = current->left;
        }else if(current->data < data){
//            if(result == nullptr){
//                result = current;
//            }else{
//                if(result->data < current->data){
//                    result = current;
//                }
//            }

            result = current;
            current = current->right;
        }else{
            result = current;
            return result;
        }
    }

    return result;
}

// recursive solution

Node* result = nullptr;

Node* floorRecursive(Node* root, int data){
    if(root == nullptr){
        return result;
    }

    if(root->data == data){
        result = root;
        return root;
    }
    if(root->data < data){
        result = root;
        floorRecursive(root->right, data);
    }else if(root->data > data){
        floorRecursive(root->left, data);
    }

    return result;
}

// recursive important

Node* floorRecursiveImpUtil(Node* root, int data, Node* &res){
    if(root == nullptr){
        return res;
    }

    if(root->data == data){
        res = root;
        return root;
    }else if(root->data < data) {
        res = root;
        floorRecursiveImpUtil(root->right, data, res);
    }else{
        floorRecursiveImpUtil(root->left, data, res);
    }

    return result;
}


Node* floorRecursiveImp(Node* root, int data){
    Node* result = nullptr;

    floorRecursiveImpUtil(root, data, result);

    return result;

}

// iterative solution to find Ceil

//Node* ceilNode = nullptr;

Node* ceil(Node* root, int data){
    if(root == nullptr){
        return nullptr;
    }

    Node* ceilNode = nullptr;

    while(root != nullptr){
        if(root->data == data){
            return root;
        }else if(root->data > data){
            ceilNode = root;
            root = root->left;
        }else{
            root = root->right;
        }
    }

    return ceilNode;
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
