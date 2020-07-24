x = 123

class Solution:
    def reverse(self, x):
        flag = -1 if x < 0 else 1
        x = abs(x)
        res = 0
        while x:
            res = res*10 + x%10
            x //= 10
        res *= flag
        return 0 if res<-2**31 or res>2**31-1 else res


K = Solution()
RESULT = K.reverse(x)
print(RESULT)
