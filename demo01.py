'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2021-01-19 10:13:27
LastEditTime: 2021-01-19 10:32:17
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
x = sol.changeKuohao("[[0,0]]")
print(x)