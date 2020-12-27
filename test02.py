'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2020-12-27 10:39:24
LastEditTime: 2020-12-27 11:50:15
FilePath: \Leetcode\test02.py
'''

class Solution:
    def eatenApples(self, apples, days):
        res = []
        
        for i in range(len(apples)):
            res.append(0)
            
            if apples[i] >= days[i]:
                


sol = Solution()
ans = sol.eatenApples([1,2,3,5,2], [3,2,1,4,2])
# ans = sol.eatenApples([3,0,0,0,0,2], [3,0,0,0,0,2])
print(ans)