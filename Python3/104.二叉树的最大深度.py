'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-27 22:35:59
LastEditTime: 2020-11-27 22:38:14
FilePath: \Leetcode\104.二叉树的最大深度.py
'''
#
# @lc app=leetcode.cn id=104 lang=python3
#
# [104] 二叉树的最大深度
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if not root:
            return 0
        left_height = self.maxDepth(root.left)
        right_height = self.maxDepth(root.right)
        return max(left_height, right_height) + 1
        
# @lc code=end

