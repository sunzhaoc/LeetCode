'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2021-01-19 10:13:27
LastEditTime: 2021-03-02 10:22:28
FilePath: \Leetcode\change.py
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
x = sol.changeKuohao("[[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]")
print(x)