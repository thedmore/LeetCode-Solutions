// https://leetcode.com/problems/binary-tree-inorder-traversal/description/
// level - easy 
// 94. Binary Tree Inorder Traversal

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    vector<int> vec;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL)
            return vec;
        inorderTraversal(root->left);
        vec.push_back(root->val);
        inorderTraversal(root->right);
        return vec;
    }
};