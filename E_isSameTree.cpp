// https://leetcode.com/problems/same-tree/description/
// level - easy
// 100. Same Tree

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
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p == NULL && q == NULL)
        //     return true;
        // if(p == NULL || q == NULL)
        //     return false;
        // if(p->val == q->val)
        //     return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        // return false; 

        // second way
        // if(p == NULL || q == NULL) return p == q;
        // else return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);   
        
        return (p == NULL || q == NULL) ? (p == q) : (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));   
    }
};