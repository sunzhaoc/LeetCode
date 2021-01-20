'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2021-01-19 10:13:27
LastEditTime: 2021-01-19 19:12:25
FilePath: \Leetcode\demo01.py
'''

class Solution:
    def changeKuohao(self, A):
        B = ""

        for i in A:
            if i == "[":
                B += "{"
            elif i == "]":
                B += "}"
            else:
                B += i
        return B


sol = Solution()
x = sol.changeKuohao("[  [3, 0, 1, 4, 2],  [5, 6, 3, 2, 1],  [1, 2, 0, 1, 5],  [4, 1, 0, 1, 7],  [1, 0, 3, 0, 5]]")
print(x)