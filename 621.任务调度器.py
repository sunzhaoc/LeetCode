'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-25 18:53:55
LastEditTime: 2020-11-25 19:24:17
FilePath: \Leetcode\621.任务调度器.py
'''
#
# @lc app=leetcode.cn id=621 lang=python3
#
# [621] 任务调度器
#

# @lc code=start
class Solution:
    def leastInterval(self, tasks, n):
        temp = list(set(tasks))
        num = []
        for i in temp:
            num.append(tasks.count(i))
            

sol = Solution()
A = sol.leastInterval(["A","A","A","B","B","B"])
print(A)
# @lc code=end

