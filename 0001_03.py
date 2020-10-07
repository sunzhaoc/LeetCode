'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-24 08:48:35
@LastEditors: Vicro
@LastEditTime: 2020-07-27 05:59:16
'''
nums = [5, 7, 3, 15]
target = 10


class Solution:
    def twoSum(self, nums, target):
        mydict = {}
        for i in range(len(nums)):
            a = target - nums[i]
            if a in mydict:
                return mydict[a], i
            else:
                mydict[nums[i]] = i


K = Solution()
RESULT = K.twoSum(nums, target)
print(RESULT)

