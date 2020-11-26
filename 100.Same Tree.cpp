/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-11-26 18:49:31
 * @LastEditTime: 2020-11-26 19:04:17
 * @FilePath: \Leetcode\100.Same Tree.cpp
 */
/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
/**s
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
#include <iostream>
using namespace std;


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr || q == nullptr) {
            return false;
        } else if (p->val != q->val) {
            return false;
        } else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};


int main() 
{
    Solution sol1;
    bool A = sol1.isSameTree([1,2,3], [1,2,3]);
    cout << A << endl;
    system("pause");
    return 0;
}

// @lc code=end

