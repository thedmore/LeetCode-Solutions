// https://leetcode.com/problems/symmetric-tree/description/
// level -easy
// 101. Symmetric Tree

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
    bool isSymmetricTree(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL || root2 == NULL) return root1 == root2;
        else return root1->val == root2->val && isSymmetricTree(root1->left, root2->right) && isSymmetricTree(root1->right, root2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        // if(root == NULL) return false;
        if(root->left == NULL || root->right == NULL) return root->left == root->right;
        else if(root->left->val == root->right->val) return isSymmetricTree(root->left, root->right);
        else return false;
    }
};