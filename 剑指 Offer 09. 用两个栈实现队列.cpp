/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-30 13:24:55
 * @LastEditTime: 2020-12-30 13:41:58
 * @FilePath: \Leetcode\剑指 Offer 09. 用两个栈实现队列.cpp
 */

#include <stack>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT %    O(n) = 
MEMORY: MB    BEAT %    O(n) = 
Description: 
*/

class CQueue {
public:
    stack<int> stack1, stack2;

    CQueue() {

    }
    
    void appendTail(int value) {
        stack1.push(value);
    }

    int deleteHead() {
        if (!stack2.empty()) {
            int ans = stack2.top();
            stack2.pop();
            return ans;
        }
        if (stack1.empty()) return -1;
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        return stack2.top();
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */