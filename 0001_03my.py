nums = [5, 7, 3, 15]
target = 10


class Solution:
    def twoSum(self, nums, target):
        mydict = {}
        for i in range(len(nums)):
            if target - nums[i] in mydict:
                return mydict[target-nums[i]], i
            else:
                mydict[nums[i]] = i


K = Solution()
RESULT = K.twoSum(nums, target)
print(RESULT)

