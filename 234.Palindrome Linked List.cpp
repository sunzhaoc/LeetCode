/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-01 16:51:15
 * @LastEditTime: 2021-03-01 17:25:03
 * @FilePath: \Leetcode\234.Palindrome Linked List.cpp
 */
/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
RESULT: Accept
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        

    }

    // 反转链表，见206题。
    ListNode* reverseList(ListNode* node) {
        ListNode* pre = nullptr;
        ListNode* cur = node;
        while (cur != nullptr) {
            ListNode* nextTmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nextTmp;
        }
        return pre;
    }

    ListNode* endOfFirstHalf(ListNode* node) {
        ListNode* fast = node, * slow = node;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};


/*
RESULT: Accept
TIME:     16ms    BEAT: 95.66%    O(n) = n
MEMORY: 14.4MB    BEAT: 35.84%    O(n) = n
USED TIME: 07:44
LAST EDIT TIME: 2021年3月1日17:2:1
Description: 
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        
        vector<int> vals;
        
        while (head != nullptr) {
            vals.emplace_back(head->val);
            head = head->next;
        }
        
        for (int i = 0, j = vals.size() - 1; i < j; i ++, j --) {
            if (vals[i] != vals[j]) return false;
        }

        return true;
    }
};

// @lc code=end

