nums = [2, 7, 11, 15]
target = 9


class Solution:
    def twoSum(self, nums, target):
        for x in range(len(nums)):
            dif = target - nums[x]
            if dif in nums:
                y = nums.index(dif)

                if x == y:
                    continue
                else:
                    return x, y
                    break


K = Solution()
RESULT = K.twoSum(nums, target)
print(RESULT)