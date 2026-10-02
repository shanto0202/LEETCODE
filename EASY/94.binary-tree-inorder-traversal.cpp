/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void ret(TreeNode* root,vector<int>& result){
        if(root==NULL) return;

        ret(root->left,result);
        result.push_back(root->val);
        ret(root->right,result);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL) return result;
        if(root->left== NULL && root->right==NULL){
        result.push_back(root->val);
        return result;
    }
    ret(root,result);
    return result;
    }
};
// @lc code=end

