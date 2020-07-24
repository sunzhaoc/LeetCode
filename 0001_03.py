nums = [2, 7, 11, 15]
target = 9


class Solution:
    def twoSum(self, nums, target):
        dict = {}
        for i in range(len(nums)):
            a = target - nums[i]
            if a in dict:
                return dict[a], i
            else:
                dict[nums[i]] = i


K = Solution()
RESULT = K.twoSum(nums, target)
print(RESULT)