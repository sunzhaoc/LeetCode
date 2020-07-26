'''
@Description: 
@Version: 1.0
@Autor: Vicro
@Date: 2020-07-27 05:28:49
@LastEditors: Vicro
@LastEditTime: 2020-07-27 05:39:57
'''

# x = -1237

# class Solution:
#     def reverse(self, x):
#         len_x = len(str(x))
#         boundary = int(str(2**31)[-len_x:][::-1]) if x<0 else int(str(2**31-1)[-len_x:][::-1])
#         y = abs(x)

#         res, res_b = 0, 0
#         while y:
#             res = res*10 + y%10
#             res_b = res_b*10 + boundary%10
#             if res>res_b:
#                 return 0
#             y //= 10
#             boundary //= 10
#         return res if x>0 else -res


# K = Solution()
# RESULT = K.reverse(x)
# print(RESULT)
