'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-25 18:53:55
LastEditTime: 2020-11-25 22:29:27
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
        num.sort(key=lambda x: -x)

        time = (num[0] - 1) * (n + 1) + 1

        if num.count(num[0]) < n:
            time += num.count(num[0])
        


sol = Solution()
A = sol.leastInterval(["A","A","A","B","B","B"], 2)
print(A)
# @lc code=end

