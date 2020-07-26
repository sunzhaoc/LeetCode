'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 06:13:39
@LastEditors: Vicro
@LastEditTime: 2020-07-27 06:14:14
'''
x = 1000030001
class Solution:
    def isPalindrome(self, x):
        y = str(x)
        z = y[::-1]
        if y==z:
            return True
        else:
            return False


K = Solution()
RESULT = K.isPalindrome(x)
print(RESULT)