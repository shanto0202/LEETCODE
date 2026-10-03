/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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

    bool check(TreeNode* L, TreeNode* R){
        if(L==NULL && R==NULL)  return true;
        if(L==NULL || R==NULL)  return false;
        if(L->val!=R->val)  return false;

        return check(L->left,R->right) &&
               check(L->right,R->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)  return false;

        return check(root->left,root->right);
    }
};
// @lc code=end

