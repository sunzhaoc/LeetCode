'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 16:41:58
@LastEditors: Vicro
@LastEditTime: 2020-07-27 16:42:05
'''
#
# @lc app=leetcode.cn id=14 lang=python3
#
# [14] 最长公共前缀
#

# @lc code=start
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        length, count = len(strs[0]), len(strs)
        for i in range(length):
            if any(i == len(strs[j]) or strs[j][i] != strs[0][i] for j in range(1, count)):
                return strs[0][:i]
        return strs[0]

# @lc code=end

