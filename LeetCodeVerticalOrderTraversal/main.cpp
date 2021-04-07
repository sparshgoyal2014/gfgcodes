/***
 * Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (x, y), its left and right children will be at positions (x - 1, y - 1) and (x + 1, y - 1) respectively.

The vertical order traversal of a binary tree is a list of non-empty reports for each unique x-coordinate from left to right. Each report is a list of all nodes at a given x-coordinate. The report should be primarily sorted by y-coordinate from highest y-coordinate to lowest. If any two nodes have the same y-coordinate in the report, the node with the smaller value should appear earlier.

Return the vertical order traversal of the binary tree.
 */


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode() : val(0), left(nullptr), right(nullptr) {}
         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };

class Solution {
public:

    void verticalOrder(TreeNode* root, int horizontal, int vertical, map<int, map<int, set<int>>> &m){
        if(root == nullptr){
            return ;
        }


        if(m.find(horizontal) != m.end()){
            if(m[horizontal].find(vertical) != m[horizontal].end()){
                (m[horizontal])[vertical].insert(root->val);
            }else{
                set<int> st;
                m[horizontal].insert(make_pair(vertical, st));
                (m[horizontal])[vertical].insert(root->val);
            }
        }else{
            map<int, set<int>> mp;
            set<int> st;
            mp.insert(make_pair(vertical, st));
            mp[vertical].insert(root->val);
            m.insert(make_pair(horizontal, mp));

        }


        verticalOrder(root->left, horizontal-1, vertical+1, m);
        verticalOrder(root->right, horizontal+1, vertical+1, m);

    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, set<int>>> mp;

        vector<vector<int>> result;

        verticalOrder(root, 0, 0, mp);

        for(pair<const int, map<int, set<int>>> &pr : mp){
            vector<int> vec;
            for(pair<const int, set<int>> &pr2: pr.second){

                for(int x: pr2.second){
                    vec.push_back(x);
                }
            }

            result.push_back(vec);
        }

        return result;


    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
