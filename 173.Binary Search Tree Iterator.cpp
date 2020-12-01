/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-01 20:25:54
 * @LastEditTime: 2020-12-01 21:18:29
 * @FilePath: \Leetcode\173.二叉搜索树迭代器.cpp
 */
/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
 */

// @lc code=start

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class BSTIterator {
public:
    vector<int> res;
    int i = 0;
    
    BSTIterator(TreeNode* root) {
        dfs(root);
    }
    
    void dfs(TreeNode* node){
        if (!node) return;
        dfs(node->left);
        res.push_back(node->val);
        dfs(node->right);
    }

    /** @return the next smallest number */
    int next() {
        return res[i++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return i < res.size() ;
    }
};


/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

