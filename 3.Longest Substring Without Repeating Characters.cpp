/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-12 14:23:16
 * @LastEditTime: 2021-01-12 20:09:52
 * @FilePath: \Leetcode\3.Longest Substring Without Repeating Characters.cpp
 */
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;


/*
RESULT: Accept
TIME:    52ms    BEAT: 51.20%    O(n) = n
MEMORY: 8.6MB    BEAT: 57.41%    O(n) = 128
Description: 优化了一下代码结构。
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;
        
        unordered_map<int, int> map;
        int left = 0, right = 0;
        int max_length = 0;
        
        while (right < s.length()) {

            // 没找到 or 找到但不在窗口中。
            if (map.find(s[right]) == map.end() || map.find(s[right])->second < left) {
                map[s[right]] = right;
                max_length = right - left + 1 > max_length ? right - left + 1 : max_length;
                right ++;
            }

            // 找到且在窗口中。
            else {
                left = map.find(s[right])->second + 1;
                map[s[right]] = right;
                max_length = (right - 1 - left + 1) > max_length ? (right - 1 - left + 1) : max_length;
                right ++;
            }
        }
    return max_length;
    }
};


/*
RESULT: Accept
TIME:    36ms    BEAT: 66.78%    O(n) = n
MEMORY: 8.6MB    BEAT: 59.70%    O(n) = 128 (ASCII字符集)
USED TIME: 30:22
Description: 
*/

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if (s.length() == 0) return 0;
//         if (s.length() == 1) return 1;
        
//         unordered_map<int, int> map;
//         int left = 0, right = 0;
//         int max_length = 0;

//         for (int i = 0; i < s.length(); i ++) {
//             if (map.find(s[i]) == map.end()) {
//                 map[s[i]] = i;
//                 max_length = right - left + 1 > max_length ? right - left + 1 : max_length;
//                 right ++;
//             }
//             else {
//                 auto it = map.find(s[i]);
//                 if (it->second < left) {
//                     map[s[i]] = i;
//                     if (i == s.length() - 1) max_length = right - left + 1 > max_length ? right - left + 1 : max_length;
//                     right ++;

//                 }
//                 else { // it->second >= left;
//                     max_length = (right - 1 - left + 1) > max_length ? (right - 1 - left + 1) : max_length;
//                     left = it->second + 1;
//                     right = i + 1;
//                     map[s[i]] = i;
//                 }
//             }
//         }
//         return max_length;
//     }
// };


int main() {
    Solution sol;
    // int ans = sol.lengthOfLongestSubstring("abcabcbb");
    // int ans = sol.lengthOfLongestSubstring("bbbbb");
    // int ans = sol.lengthOfLongestSubstring("pwwkew");
    // int ans = sol.lengthOfLongestSubstring("");
    // int ans = sol.lengthOfLongestSubstring("au");
    // int ans = sol.lengthOfLongestSubstring("dvdf");
    // int ans = sol.lengthOfLongestSubstring("tmmzuxt");
    // int ans = sol.lengthOfLongestSubstring("aab");
    cout << ans << endl;
    system("pause");
    return 0;
}

// @lc code=end

