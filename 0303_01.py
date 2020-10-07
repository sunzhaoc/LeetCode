'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 22:21:50
@LastEditors: Vicro
@LastEditTime: 2020-07-28 19:49:47
'''
nums = [-2, 0, 3, -5, 2, -1]
i = 2
j = 3


class NumArray():
    def __init__(self, nums):
        self.nums = nums
    
    def sumRange(self, i, j):
        sum = 0
        for k in range(i, j+1):
            sum += self.nums[k]
        return sum


obj = NumArray(nums)
param_1 = obj.sumRange(i, j)
