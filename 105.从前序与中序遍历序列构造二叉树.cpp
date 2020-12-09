/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-09 10:52:00
 * @LastEditTime: 2020-12-09 11:04:17
 * @FilePath: \Leetcode\105.从前序与中序遍历序列构造二叉树.cpp
 */
/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
 */

// @lc code=start

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


#include <vector>
using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int m = preorder.size();
        if (m == 0) return NULL;

        TreeNode* root = new TreeNode(preorder[0]);
        vector<int> preorder_left, inorder_left, preorder_right, inorder_right;

        int i;
        for (i = 0; i < m; i ++) {
            if (inorder[i] == preorder[0])  break;
            inorder_left.push_back(inorder[i]);
        }
        for (i = i + 1; i < m; i ++) {
            inorder_right.push_back(inorder[i]);
        }
        for (int j = 1; j < m; j ++) {
            if (j <= inorder.size())    preorder_left.push_back(preorder[j]);
        }
    }
};
// @lc code=end

