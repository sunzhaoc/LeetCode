/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-02 16:14:16
 * @LastEditTime: 2021-03-02 17:08:08
 * @FilePath: \Leetcode\19.Remove Nth Node From End of List.cpp
 */
/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;


/*
RESULT: Accepts
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* item = nullptr;
        for (auto it = head; it; it = it->next) {
            if (n == 0) {
                item = it;
                break;
            }
            n --;
        }
        if (item == nullptr && n == 0) return nullptr;

        auto tmp = head;
        for (auto it = item; it->next; it = it->next) {
            tmp = tmp->next;
        }
        if (tmp == head) return head->next;
        tmp->next = tmp->next->next;

        return head;
    }
};


/*
RESULT: Accept
TIME:      0ms    BEAT: 100.00%    O(n) < 2n
MEMORY: 10.4MB    BEAT:  73.73%    O(n) = 1
LAST EDIT TIME: 2021年3月2日16:40:4
Description: 一开始这么写报错，不知道咋回事。
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int num = 0;
        for (auto it = head; it; it = it->next) {
            num ++;
        }

        if (num == 1 && n == 1) return nullptr;
        num -= n;
        if (num == 0) return head->next;

        int num2 = 0;
        for (auto it = head; it; it = it->next) {
            num2 += 1;
            if (num2 == num) {
                it->next = it->next->next;
                break;
            }
        }
        return head;
    }
};


/*
RESULT: Accept
TIME:      4ms    BEAT: 87.34%    O(n) < 2n
MEMORY: 10.3MB    BEAT: 89.29%    O(n) = 1
USED TIME: 18:46
LAST EDIT TIME: 2021年3月2日16:35:23
Description: 参考1721题的for循环。
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int num = 0;
        for (auto it = head; it; it = it->next) {
            num ++;
        }

        if (num == 1 && n == 1) return nullptr;
        num -= n;
        if (num == 0) return head->next;

        auto it = head;
        for (int i = 1; i <= num + n; i ++) {
            if (i == num) {
                it->next = it->next->next;
                break;
            }
            it = it->next;
        }
        
        return head;
    }
};

// @lc code=end

