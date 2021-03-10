/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-10 08:27:58
 * @LastEditTime: 2021-03-10 08:52:57
 * @FilePath: \Leetcode\224.基本计算器.cpp
 */
/*
 * @lc app=leetcode.cn id=224 lang=cpp
 *
 * [224] 基本计算器
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
RESULT: Accept
TIME:   ms    BEAT: %    O(n) = n
MEMORY: MB    BEAT: %    O(n) = n
USED TIME: 
LAST EDIT TIME: 2021年3月10日8:52:59
Description: 
*/

class Solution {
public:
    int calculate(string s) {
        stack<int> ops;
        ops.push(1);
        int sign = 1;
        int res = 0;
        int i = 0;
        whlie (i < s.length()) {
            if (s[i] == ' ') {
                i ++;
            }
            else if (s[i] == '+') {
                sign = ops.top();
                i ++;
            }
            else if (s[i] == '-') {
                sign = - ops.top();
                i ++;
            }
            else if (s[i] == '(') {
                ops.push(sign);
                i ++;
            }
            else if (s[i] == ')') {
                ops.push(sign);
                i ++;
            }
            else {
                long num = 0;
                while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                    num = num * 10 + s[i] - '0';
                    i ++;
                }
                res += sign * num;
            }
        }
        return res;
    }
};

// @lc code=end

