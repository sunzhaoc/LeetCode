'''
@Author: your name
@Date: 2020-07-24 10:42:02
@LastEditTime: 2020-07-24 20:10:05
@LastEditors: Please set LastEditors
@Description: In User Settings Edit
@FilePath: \Leetcode\0007_01.py
'''

x = 123

class Solution:
    def reverse(self, x):
        flag = -1 if x < 0 else 1
        x = abs(x)
        res = 0
        while x:
            res = res*10 + x%10
            x //= 10
        res *= flag
        return 0 if res<-2**31 or res>2**31-1 else res


K = Solution()
RESULT = K.reverse(x)
print(RESULT)
