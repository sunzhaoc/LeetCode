/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-02 19:03:02
 * @LastEditTime: 2021-03-02 19:30:58
 * @FilePath: \Leetcode\395.Longest Substring with At Least K Repeating Characters.cpp
 */
/*
 * @lc app=leetcode.cn id=395 lang=cpp
 *
 * [395] 至少有K个重复字符的最长子串
 */

// @lc code=start


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
USED TIME: 
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:
    int longestSubstring(string s, int k) {
        if (k == 1) return s.length();
        if (k > s.length()) return 0;
        return longestSubString(s, 0, s.length() - 1, k);
    }

    int longestSubString(string& str, int start, int end, int k) {
        if (start >= end || end - start + 1 < k) return 0; 
        vector<int> count(26, 0);
        for (int i = start; i <= end; i ++) {
            count[str[i] - 'a'] ++;
        }
        
        // 只分割一次。原本的想法是一次性把所有的全分割了。
        bool needSplit = false;
        for (int i = 0; i < 26; i ++) {
            if (count[i] > 0 && count[i] < k) {
                needSplit = true;
                break;
            }
        }

        if (!needSplit) return end - start + 1;

        int ret = 0;
        int left = start, right = start;
        while (right <= end) {
            while (left <= end) {
                if (count[str[left] - 'a'] >= k) break;
                left ++;
            }
            right = left + 1;
            
        }
    }
};

// @lc code=end

