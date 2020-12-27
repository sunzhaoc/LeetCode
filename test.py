'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2020-12-27 10:31:24
LastEditTime: 2020-12-27 10:38:33
FilePath: \Leetcode\test.py
'''
class Solution:
    def halvesAreAlike(self, s):
        if len(s) < 2: return False
        left = s[:len(s) // 2]
        right = s[len(s) // 2:]

        A = 0
        B = 0

        for i in left:
            if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U':
                A += 1


        for i in right:
            if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U':
                B += 1
        
        if A == B:
            return True
        else:
            return False


        


sol = Solution()
# ans = sol.halvesAreAlike("book")
ans = sol.halvesAreAlike("AbCdEfGh")
print(ans)