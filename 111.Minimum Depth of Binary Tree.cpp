/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-22 15:32:29
 * @LastEditTime: 2020-12-22 18:05:46
 * @FilePath: \Leetcode\111.Minimum Depth of Binary Tree.cpp
 */
/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start

//Definition for a binary tree node.

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
    int minDepth(TreeNode* root) {
        return dfs(root, 0);        
    }

    int dfs(TreeNode* node, int length) {
        if (node == nullptr) return length;
        if (node->left && node->right) return min(dfs(node->left, length + 1), dfs(node->right, length + 1));
    }
};

// @lc code=end

