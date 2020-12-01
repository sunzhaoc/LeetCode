'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-12-01 15:06:35
LastEditTime: 2020-12-01 16:12:23
FilePath: \Leetcode\98.验证二叉搜索树.py
'''
#
# @lc app=leetcode.cn id=98 lang=python3
#
# [98] 验证二叉搜索树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isValidBST(self, root: TreeNode) -> bool:
        res = []

        self.dfs(root, res)
        # for i in range(len(res)-1):
        #     if res[i] >= res[i + 1]:
        #         return False
        return True

    def dfs(self, node, res):
        if not node:
            return
        self.dfs(node.left, res)
        res.append(node.val)
        self.dfs(node.right, res)
        
        
        
# @lc code=end

