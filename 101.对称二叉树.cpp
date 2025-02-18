/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool dfs(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true; 
        if (p && q && p->val == q->val) {
            return dfs(p->left, q->right) && dfs(p->right, q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        if (!left && !right) return true;
        if (left && right) {
            if (left->val != right->val) return false;
            TreeNode* p = left;
            TreeNode* q = right;
            return dfs(p, q);
        } else {
            return false;
        }
    }
};
// @lc code=end

