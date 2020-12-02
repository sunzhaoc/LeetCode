'''
Description: k
Version: 1.0
Author: Vicro
Date: 2020-12-02 13:45:44
LastEditTime: 2020-12-02 15:34:52
FilePath: \Leetcode\0.test.py
'''
#
# @lc app=leetcode.cn id=321 lang=python3
#
# [321] 拼接最大数
#

# @lc code=start

A = [1, 3, 2]

A = map(A)

B = 1
class Solution:
    def maxNumber(self, nums1, nums2, k):
        
        def choose_max(nums, k, list, res):
            if len(list) == temp:
                res.append(list)
                return res
            for j in range(len(nums) - k + 1):
                # print(nums[len(nums) - k])
                res = choose_max(nums[j + 1:], k - 1, list + [nums[j]], res)
            return res

        for i in range(k + 1):
            if i <= len(nums1) and k - i <= len(nums2):
                temp = i
                res1 = choose_max(nums1, i, [], [])
                temp = k - i
                res2 = choose_max(nums2, k - i, [], [])
                A = 1

import 
sol = Solution()
sol.maxNumber([3, 4, 6, 5], [9, 1, 2, 5, 8, 3], 5)
                
        
# @lc code=end

