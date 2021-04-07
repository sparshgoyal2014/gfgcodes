#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;


public:


    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};


// naive
int height(Node* root){
    if(root == nullptr){
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh)+1;
}

int diameter(Node* root){
    if(root == nullptr){
        return 0;
    }

    int d1 = 1 + height(root->left) + height(root->right);

    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1, max(d2, d3));
}

// using hash map

unordered_map<Node*, int> map;

int height2(Node* root){
    if(root == nullptr){
        map.insert({root, 0});
        return 0;
    }

    int lh = height2(root->left);
    int rh = height2(root->right);

    int height = max(lh, rh) + 1;
    map.insert({root, height});

    return height;

}

int diameter2(Node* root){
    if(root == nullptr){
        return 0;
    }

    int d1 = 1 + map[root->left] + map[root->right];

    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1, max(d2, d3));
}

// efficient approach using modification of height function

int result = 0;
int height3(Node* root){
    if(root == nullptr){
        return 0;
    }

    int lh = height3(root->left);
    int rh = height3(root->right);

    result = max(result, lh + rh +1);

    return max(lh, rh) + 1;
}



int main() {
    std::cout << "Hello, World!" << std::endl;

    string str = "Hello";

    const int arr[5] = {1,2,3,4,5};

    "hello"[0] = 'a';


    Node arr2[2] = {Node(2), Node(3)};



    return 0;
}
