'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 06:19:44
@LastEditors: Vicro
@LastEditTime: 2020-07-27 07:04:25
'''
strs = ["aa","a"]
# print(len(List))
class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        length, count = len(strs[0]), len(strs)
        for i in range(length):
            if any(i == len(strs[j]) or strs[j][i] != strs[0][i] for j in range(1, count)):
                return strs[0][:i]
        return strs[0]


K = Solution()
RESULT = K.longestCommonPrefix(strs)
print(RESULT)