/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-01 11:11:13
 * @LastEditTime: 2021-03-01 15:01:21
 * @FilePath: \Leetcode\160.Intersection of Two Linked Lists.cpp
 */
/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
using namespace std;


/*
RESULT: Accept
TIME:     52ms    BEAT: 67.23%    O(n) = 
MEMORY: 14.3MB    BEAT: 59.67%    O(n) = 
LAST EDIT TIME: 2021年3月1日15:0:30
Description: 
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA, * b = headB;
        while (a != b) {
            a = a == nullptr ? headB : a->next;
            b = b == nullptr ? headA : b->next;
        }
        return a;
    }
};
// @lc code=end

