'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-12-09 11:14:05
LastEditTime: 2020-12-09 11:22:38
FilePath: \Leetcode\105.从前序与中序遍历序列构造二叉树.py
'''
#
# @lc app=leetcode.cn id=105 lang=python3
#
# [105] 从前序与中序遍历序列构造二叉树
#

# @lc code=start
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

"""
RESULT: Accept
TIME:   1060ms    BEAT 5.16%    O(n) = 
MEMORY: 90.6MB    BEAT 5.01%    O(n) =  
Description: 
"""

class Solution:
    def buildTree(self, preorder, inorder):
        m = len(preorder)
        if m == 0:  return None
        root = TreeNode(preorder[0])

        preorder_left, preorder_right, inorder_left, inorder_right = [], [], [], []

        for i in range(m):
            if (inorder[i] == preorder[0]):  break
            inorder_left.append(inorder[i])
        for i in range(i + 1, m):
            inorder_right.append(inorder[i])
        for j in range(1, m):
            if j <= len(inorder_left):
                preorder_left.append(preorder[j])
            else:
                preorder_right.append(preorder[j])
        root.left = self.buildTree(preorder_left, inorder_left)
        root.right = self.buildTree(preorder_right, inorder_right)
        return root

        
# @lc code=end

