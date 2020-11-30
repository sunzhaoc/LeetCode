'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-30 17:07:56
LastEditTime: 2020-11-30 17:17:04
FilePath: \Leetcode\39.组合总和.py
'''
#
# @lc app=leetcode.cn id=39 lang=python3
#
# [39] 组合总和
#

# @lc code=start
class Solution:
    def combinationSum(self, candidates, target):
        res = []
        n = len(candidates)

        def backTrack(level, list):
            res.append(list)

            for i in range(level, n):
                backTrack(level + 1, list + [candidates[i]])
        
        backTrack(0, [])
        return res    


sol = Solution()
A = sol.combinationSum([2,3,6,7], 7)
print(A)

# @lc code=end

