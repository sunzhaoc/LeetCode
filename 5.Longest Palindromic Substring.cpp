/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-12 20:10:58
 * @LastEditTime: 2021-01-12 21:18:47
 * @FilePath: \Leetcode\5.Longest Palindromic Substring.cpp
 */
/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;

/*
RESULT: Accept
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
Description: DP。
*/

class Solution {
public:
    string longestPalindrome(string s) {

    }
};


/*
RESULT: Accept
TIME:     268ms    BEAT: 52.94%    O(n) = n^2
MEMORY: 234.5MB    BEAT: 38.85%    O(n) = 1
USED TIME: 19:37
Description: 中心扩展法。注意偶数和奇数的情况。
*/

// class Solution {
// public:
//     string longestPalindrome(string s) {
//         if (s.length() == 1) return s;
        
//         vector<int> res(3), tmp(3);
//         int len = 1;
//         for (int i = 1; i < s.length(); i ++) {
//             tmp = fun(s, i, i);
//             if (tmp[2] >= len) {
//                 res = tmp;
//                 len = tmp[2];
//             }
//             tmp = fun(s, i - 1, i);
//             if (tmp[2] >= len) {
//                 res = tmp;
//                 len = tmp[2];
//             }
//         }

//         string ans = "";
//         for (int i = res[0]; i <= res[1]; i ++) {
//             ans += s[i];
//         }
//         return ans;
//     }

// private:
//     vector<int> fun(string s, int mid1, int mid2) {
//         int x = 0;
        
//         while (mid1 - x >= 0 && mid2 + x < s.length() && s[mid1 - x] == s[mid2 + x]) x ++;

//         if (mid1 == mid2) return {mid1 - x + 1, mid2 + x - 1, 2 * x - 1};
//         else return {mid1 - x + 1, mid2 + x - 1, 2 * x};
//     }
// };


int main() {
    Solution sol;
    // string ans = sol.longestPalindrome("babad");
    // string ans = sol.longestPalindrome("cbbd");
    // string ans = sol.longestPalindrome("a");
    string ans = sol.longestPalindrome("ac");
    cout << ans << endl;
    system("pause");
    return 0;
}

// @lc code=end

