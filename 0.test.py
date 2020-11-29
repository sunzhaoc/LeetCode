'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-11-24 22:21:23
LastEditTime: 2020-11-29 16:46:49
FilePath: \Leetcode\0.test.py
'''
class Soulution():
    def function01(self, x):
        res = 2
        self.function02(x, res)
        return res
    
    def function02(self, x, res):
        res += x
        A= 1

sol = Soulution()
A = sol.function01(1)
print(A)
