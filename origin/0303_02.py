'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 22:21:50
@LastEditors: Vicro
@LastEditTime: 2020-07-28 20:29:07
'''
nums = [-1]
i = 0
j = 0


class NumArray():
    def __init__(self, nums):
        if not nums:
            return

        n = len(nums)
        self.sum = [[0 for i in range(n)] for j in range(n)]
        for i in range(n):
            for j in range(n):
                if i==j:
                    self.sum[i][i] = nums[i]
                else:
                    for k in range(i, j+1):
                        self.sum[i][j] += nums[k]
    
    
    def sumRange(self, i, j):
        print(self.sum[i][j])
        return self.sum[i][j]


obj = NumArray(nums)
param_1 = obj.sumRange(i, j)
