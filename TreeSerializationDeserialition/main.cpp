#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
    }
};

void serialize(Node* root, vector<int> &vec){
    if(root == nullptr){
        vec.push_back(-1);
        return ;
    }

    vec.push_back(root->data);

    serialize(root->left, vec);
    serialize(root->right, vec);
}


int index = 0;

Node* deserialize(vector<int> &vec){
    if(index == vec.size()){
        return nullptr;
    }

    int val = vec[index];
    index++;

    if(val == -1){
        return nullptr;
    }

    Node* root = new Node(val);

    root->left = deserialize(vec);
    root->right = deserialize(vec);

    return root;
}


void display(int* arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";

        arr[i] = i;
    }

    arr[0] = 5;
    cout << endl;

}



int main() {
    std::cout << "Hello, World!" << std::endl;

    int n = 5;

    int arr[n] = {0};

    const int x = 5;
    int arr2[x] = {0};

    const int y = n;

    display(arr2, 5);





    return 0;
}
