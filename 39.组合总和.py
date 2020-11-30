'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-30 17:07:56
LastEditTime: 2020-11-30 20:13:12
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
        """Method 03"""
        res = []
        n = len(candidates)

        def backTrack(cha, list):
            if cha == 0:
                res.append(list)
            for i in range(n):
                if cha - candidates[i] >= 0:
                    backTrack(cha - candidates[i], list + [candidates[i]])

        backTrack(target, [])
        return res
        
        
        """Method 02"""
        # res = []
        # n = len(candidates)

        # def backTrack(cha, list):
        #     if cha == 0:
        #         temp = sorted(list)
        #         if temp not in res:
        #             res.append(temp)
        #     for i in range(n):
        #         if cha - candidates[i] >= 0:
        #             backTrack(cha - candidates[i], list + [candidates[i]])

        # backTrack(target, [])
        # return res


        """Method 01"""
        # res = []
        # n = len(candidates)
        # candidates.sort()

        # def backTrack(level, list):
        #     if sum(list) == target:
        #         temp = sorted(list)
        #         if temp not in res:
        #             res.append(temp)
            
        #     for i in range(n):
        #         if sum(list) < target:
        #             backTrack(i + 1, list + [candidates[i]])
        
        # backTrack(0, [])
        
        # return res    


sol = Solution()
A = sol.combinationSum([2,3,6,7], 7)
print(A)

# @lc code=end

