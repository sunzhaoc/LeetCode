/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-09 10:52:00
 * @LastEditTime: 2020-12-09 15:08:28
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
TIME:     48ms    BEAT 34.73%    O(n) = n
MEMORY: 17.3MB    BEAT 60.56%    O(n) = n
Description: 
*/

class Solution {
public:
    unorder_map<int, int> idx_map;
    int num = 0;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int left, int right) {
        if (left > right)   return nullptr;
        

        root->left = helper(preorder, l1 + 1, l1 + mid, inorder, l2, l2 + mid - 1);
        root->right = helper(preorder, l1 + mid + 1, r1, inorder, l2 + mid + 1, r2);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty())   return nullptr;

        // 存储每个元素的位置
        for (int i = 0; i < inorder.size(); i ++) {
            idx_map[inorder[i]] = i;
        }

        return helper(preorder, inorder, 0, preorder.size() - 1);
    }
};


/*
RESULT: Accept
TIME:     328ms    BEAT 5.16%    O(n) = 
MEMORY: 149.9MB    BEAT 5.02%    O(n) =  
Description: 
*/

// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int m = preorder.size();
//         if (m == 0) return NULL;

//         TreeNode* root = new TreeNode(preorder[0]);
//         vector<int> preorder_left, inorder_left, preorder_right, inorder_right;

//         int i;
//         // 1、构建左子树的中序遍历
//         for (i = 0; i < m; i ++) {
//             if (inorder[i] == preorder[0])  break;
//             inorder_left.push_back(inorder[i]);
//         }

//         // 2、构建右子树的中序遍历
//         for (i = i + 1; i < m; i ++) {
//             inorder_right.push_back(inorder[i]);
//         }

//         // 3、构建左、右子树的前序遍历
//         for (int j = 1; j < m; j ++) {
//             if (j <= inorder_left.size())    preorder_left.push_back(preorder[j]);
//             else preorder_right.push_back(preorder[j]);
//         }

//         root->left = buildTree(preorder_left, inorder_left);
//         root->right = buildTree(preorder_right, inorder_right);
//         return root;
//     }
// };

// @lc code=end

