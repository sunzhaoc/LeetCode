'''
Description: 
Version: 1.0
Autuor: Vicro
Date: 2020-11-12 22:36:33
LastEditTime: 2020-11-12 23:02:28
FilePath: \Leetcode\Chinese\1518.换酒问题.py
'''
#
# @lc app=leetcode.cn id=1518 lang=python3
#
# [1518] 换酒问题
#

# @lc code=start
class Solution:
    def numWaterBottles(self, numBottles, numExchange):
        if numExchange > numBottles:
            return numBottles

        empty = numBottles
        while (empty > numExchange):
            empty = empty / numExchange


# @lc code=end

