'''
Description: 
Version: 1.0
Author: Vicro
Date: 2020-12-08 15:32:57
LastEditTime: 2020-12-08 19:18:48
FilePath: \Leetcode\842.将数组拆分成斐波那契序列.py
'''
#
# @lc app=leetcode.cn id=842 lang=python3
#
# [842] 将数组拆分成斐波那契序列
#

# @lc code=start

"""
RESULT: Accept
TIME:    128ms    BEAT 47.23%    O(n) = 
MEMORY: 13.6MB    BEAT 11.40%    O(n) = 
Description: 从后往前进行遍历。
"""

class Solution:
    def splitIntoFibonacci(self, S):
        ans = self.findFirst(S)
        if ans == []:    return []
        for i in ans:
            res = self.whetherRight(i, S)
            if res[1] == True:
                return res[0][::-1]
        return []


    def findFirst(self, S):
        '''
        description: 找到符合条件的最后三个数，从而可以算出剩余的数。
        param {*}
        return {*}
        '''
        ans = []
        for i in range(1, (len(S) - 1) // 2 + 1):
            for j in range(1, min(i + 1, len(S) - i - 1)):
                A = int(S[-i:]) - int(S[-i-j: -i])
                if A == int(S[-i-j-len(str(A)): -i-j]):
                    ans.append([])
                    ans[-1].append(int(S[-i:]))
                    ans[-1].append(int(S[-i-j: -i]))
                    ans[-1].append(int(S[-i-j-len(str(A)): -i-j]))
                    
                    if i+j+len(str(A)) == len(S):
                        return [ans[-1]]
        return ans
    

    def whetherRight(self, A, S):
        if A[0] > 2**31 - 1 or A[1] > 2**31 - 1 or A[2] > 2**31 - 1:    return [A, False]
        num = 0  
        for i in A:
            num += len(str(i))
        if num == len(S):
            return [A, True]
        S = S[: -num]

        while (len(S) > 0):
            V = S[-1:]
            if A[-2] - A[-1] == int(S[-len(str(A[-2] - A[-1])): ]):
                S = S[: -len(str(A[-2] - A[-1]))]
                A.append(A[-2] - A[-1])
            else:
                return[A, False]
        return [A, True]


sol = Solution()
# A = sol.splitIntoFibonacci("112358130")
# A = sol.splitIntoFibonacci("123456579")
# A = sol.splitIntoFibonacci("11235813")
# A = sol.splitIntoFibonacci("1101111")
# A = sol.splitIntoFibonacci("0000")
# A = sol.splitIntoFibonacci("0123")
A = sol.splitIntoFibonacci("539834657215398346785398346991079669377161950407626991734534318677529701785098211336528511")

print(A)
# @lc code=end

