'''
Description: 
Version: 1.0
Autuor: Vicro
Date: 2020-11-12 22:36:33
LastEditTime: 2020-11-13 11:07:29
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
        ans = numBottles

        if numExchange > numBottles:
            return ans
        
        while (numExchange <= numBottles):
            ans += numBottles // numExchange # 换了多少新的
            numBottles =  numBottles - (numBottles // numExchange) * numExchange + (numBottles // numExchange)

        return ans

sol = Solution()
A = sol.numWaterBottles(9, 3)
print(A)
# @lc code=end

