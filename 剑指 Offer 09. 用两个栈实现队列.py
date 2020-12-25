'''
Description: 
Version: 1.0
Autor: Vicro
Date: 2020-12-25 11:00:36
LastEditTime: 2020-12-25 11:03:31
FilePath: \Leetcode\剑指 Offer 09. 用两个栈实现队列.py
'''
class CQueue:

    def __init__(self):
        self.A = []
        self.B = []

    def appendTail(self, value: int) -> None:
        self.A.append(value)

    def deleteHead(self) -> int:
        



# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()