#include <iostream>
#include <map>

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

void verticalDisUtil(Node* root, int hd, map<int, int> &map){
    if(root == nullptr){
        return ;
    }

    verticalDisUtil(root->left, hd - 1, map);

    map[hd] += root->data;

    verticalDisUtil(root->right, hd + 1, map);
}

void verticalDis(Node* root){
    map<int, int> map;

    verticalDisUtil(root, 0, map);

    for(auto x : map){
        cout << x.second << " ";
    }

    cout << endl;


}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
