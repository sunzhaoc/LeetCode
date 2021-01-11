/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-16 15:03:59
 * @LastEditTime: 2021-01-11 00:10:47
 * @FilePath: \Leetcode\5652.Swapping Nodes in a Linked List.cpp
 */

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
using namespace std;


class Solution {
public:
    ListNode* node_left;
    ListNode* node_left_father;
    ListNode* node_right;
    ListNode* node_right_father;
    int length;
    void dfs(ListNode* node, ListNode* node_father, int depth, int k) {
        if (depth == k) {
            node_left = node;
            node_left_father = node_father;
            return;
        }
        dfs(node->next, node, depth + 1, k);
        return;
    }


    void dfs_length(ListNode* node, int depth) {
        if (node->next == nullptr) {
            length = depth;
            return;
        }
        dfs_length(node->next, depth + 1);
        return;
    }

    void dfs_right(ListNode* node, ListNode* node_father, int depth, int k) {
        if (depth == k) {
            node_right = node;
            node_right_father = node_father;
            return;
        }
        dfs_right(node->next, node, depth + 1, k);
        return;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        dfs(head, nullptr, 1, k);
        dfs_length(head, 1);
        if (k == length-k+1) return head;
        dfs_right(head, nullptr, 1, length - k + 1);

        if (k == 1 && length > 2) {
            node_right->next = node_left->next;
            node_right_father->next = node_left;
            node_left->next = nullptr;
            return node_right;
        }
        if (k == length && k > 2) {
            
            node_left->next = node_right->next;
            node_left_father->next = node_right;
            node_right->next = nullptr;
            return node_left;
        }
        if (k % 2 == 1 && length == 2) {
            ListNode* temp = node_left;
            node_left->next = nullptr;
            node_right->next = temp;
            return node_right;
        }
        if (k % 2 == 0 && length == 2) {
            node_left->next = node_right;
            node_right->next = nullptr;
            return node_left;
        }
        node_left_father->next = node_right;
        node_right_father->next = node_left;
        ListNode* temp = node_left->next;
        node_left->next = node_right->next;
        node_right->next = temp;
        return head;
    }
};