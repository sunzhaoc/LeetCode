'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-30 16:39:35
LastEditTime: 2020-11-30 16:52:02
FilePath: \Leetcode\46.全排列.py
'''
#
# @lc app=leetcode.cn id=46 lang=python3
#
# [46] 全排列
#

# @lc code=start
class Solution:
    def permute(self, nums):
        res = []
        n = len(nums)

        def backTrack(level, list):
            if level == n:
                res.append(list)
            for i in range(n):
                backTrack(level + 1, nums[:i] + nums[i + 1:])
                
        backTrack(0, [])

        return res


sol = Solution()
A = sol.permute([1, 2, 3])
print(A)
# @lc code=end

