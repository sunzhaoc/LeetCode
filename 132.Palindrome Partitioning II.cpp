/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-07 17:01:04
 * @LastEditTime: 2021-03-07 20:19:31
 * @FilePath: \Leetcode\132.Palindrome Partitioning II.cpp
 */
/*
 * @lc app=leetcode.cn id=132 lang=cpp
 *
 * [132] 分割回文串 II
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
#include <stack>
#include <unordered_set>
using namespace std;


/*
RESULT: Time OUt
LAST EDIT TIME: 2021年3月7日20:19:28
*/

class Solution {
private:
    vector<vector<int>> dp;
    int res = INT_MAX;
    vector<string> ans;
    int n;

public:
    void dfs(const string& s, int i) {
        if (i == n) {
            res = ans.size() < res ? ans.size() : res;
            return;
        }
        for (int j = i; j < n; j ++) {
            if (dp[i][j]) {
                ans.push_back(s.substr(i, j - i + 1));
                dfs(s, j + 1);
                ans.pop_back();
            }
        }
    }

    int minCut(string s) {
        n = s.size();
        dp.assign(n, vector<int>(n, true));

        for (int j = 1; j < n; j ++) {
            for (int i = 0; i < j; i ++) {
                if (s[i] != s[j]) dp[i][j] = false;
                else {
                    if (j - i < 3) dp[i][j] = true;
                    else dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }

        dfs(s, 0);
        return res;
    }

    int isPalindrome(const string& s, int i, int j) {
        if (dp[i][j]) {
            return dp[i][j];
        }
        if (i >= j) {
            return dp[i][j] = 1;
        }
        return dp[i][j] = (s[i] == s[j] ? isPalindrome(s, i + 1, j - 1) : -1);
    }
};

// @lc code=end

