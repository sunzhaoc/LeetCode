/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-01 16:30:02
 * @LastEditTime: 2021-03-01 16:36:18
 * @FilePath: \Leetcode\141.Linked List Cycle.cpp
 */
/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
#include <queue>
#include <unordered_set>
using namespace std;


class Solution {
public:
    bool hasCycle(ListNode *head) {
        
    }
};


/*
RESULT: Accept
TIME:     24ms    BEAT: 11.65%    O(n) = n
MEMORY: 10.3MB    BEAT:  5.02%    O(n) = n
USED TIME: 04:35
LAST EDIT TIME: 2021年3月1日16:35:59
Description: 哈希。
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> seen;
        while (head != nullptr) {
            if (seen.count(head)) {
                return true;
            }
            seen.insert(head);
            head = head->next;
        }

        return false;
    }
};

// @lc code=end

