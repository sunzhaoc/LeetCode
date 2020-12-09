/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-09 10:52:00
 * @LastEditTime: 2020-12-09 11:13:16
 * @FilePath: \Leetcode\105.从前序与中序遍历序列构造二叉树.cpp
 */
/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
 */

// @lc code=start
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


/*
RESULT: Accept
TIME:     328ms    BEAT 5.16%    O(n) = 
MEMORY: 149.9MB    BEAT 5.02%    O(n) =  
Description: 
*/

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
            if (j <= inorder_left.size())    preorder_left.push_back(preorder[j]);
            else preorder_right.push_back(preorder[j]);
        }
        root->left = buildTree(preorder_left, inorder_left);
        root->right = buildTree(preorder_right, inorder_right);
        return root;
    }
};
// @lc code=end

