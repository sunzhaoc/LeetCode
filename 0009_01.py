'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 05:45:00
@LastEditors: Vicro
@LastEditTime: 2020-07-27 06:01:13
'''
x = 121
class Solution:
    def isPalindrome(self, x):
        y = str(x)
        z = y[::-1]
        num = len(y)//2 if x%2==0 else (len(y)-1)//2
        for i in range(num):
            if y[i] != z[i]:
                return False
        return True


K = Solution()
RESULT = K.isPalindrome(x)
print(RESULT)