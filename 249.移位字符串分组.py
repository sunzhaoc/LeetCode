'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2021-03-03 16:43:15
LastEditTime: 2021-03-03 16:56:09
FilePath: \Leetcode\249.移位字符串分组.py
'''

class Solution:
    def groupStrings(self, strings):
        dict = {}

        for str in strings:
            if len(str) == 1:
                if "-1" in dict.keys():
                    dict["-1"].append(str)
                else:
                    dict["-1"] = [str]
            else:
                tmp = ""
                for i in range(1, len(strings)):
                    A, B = ord(str[i]), ord(str[i - 1])
                    tmp += chr(26 + A - B if A - B < 0 else A - B)
                    tmp += " "
                if tmp in dict.keys():
                    dict[tmp].append(str)
                else:
                    dict[tmp] = [str]
        
        return [x for x in dict]


sol = Solution()
ans = sol.groupStrings(["az", "ba", "abc", "bcd", "acef", "xyz", "a", "z"])
print(ans)