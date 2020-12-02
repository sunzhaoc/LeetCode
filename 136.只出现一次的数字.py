'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-12-02 20:44:39
LastEditTime: 2020-12-02 20:54:41
FilePath: \Leetcode\136.只出现一次的数字.py
'''
#
# @lc app=leetcode.cn id=136 lang=python3
#
# [136] 只出现一次的数字
#
import collections
# @lc code=start
class Solution:
    def singleNumber(self, nums):
        return collections.Counter(nums).most_common(len(nums)) [-1][0]


sol = Solution()
A = sol.singleNumber([1,2,1,2,2,4])
print(A)


# @lc code=end

