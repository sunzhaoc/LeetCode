'''
@Description: 14.最长公共前缀——分治法
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 21:06:59
@LastEditors: Vicro
@LastEditTime: 2020-07-27 22:14:04
'''
strs = ["flower","flow","flowerss","flowesss"]
# print(len(List))
class Solution:
    def longestCommonPrefix(self, strs):
        def lcp(start, end):
            if start == end:
                return strs[start]
            
            mid = (start + end) // 2
            
            Left, Right = lcp(start, mid), lcp(mid + 1, end)
            minLength = min(len(Left), len(Right))
            for i in range(minLength):
                if Left[i] != Right[i]:
                    return Left[:i]
            return Left[:minLength]
            
        return "" if not strs else lcp(0, len(strs)-1)


K = Solution()
RESULT = K.longestCommonPrefix(strs)
print(RESULT)