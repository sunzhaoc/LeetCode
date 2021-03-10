/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-10 09:37:40
 * @LastEditTime: 2021-03-10 10:27:51
 * @FilePath: \Leetcode\772.Basic Calculator III.cpp
 */



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
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
USED TIME: 
LAST EDIT TIME: 2021年3月10日9:38:8
Description: 
*/

class Solution {
public:
    int calculate(string s) {
        int res = trackBack(s, 0, s.length() - 1);
    }

    int trackBack(string& s, int start, int end) {
        int i = start;
        long res = 0;
        int point = 0;
        stack<int> opts;
        stack<int> nums;
        opts.push(1);
    
        while (i <= end) {
            if (s[i] == ' ') i ++;
            else if (s[i] == '+') {
                opts.push(1);
                i ++;
            }
            else if (s[i] == '-') {
                opts.push(-1);
                i ++;
            }
            else if (s[i] == '*') {
                int point = 1;
                i ++;
            }
            else if (s[i] == '-') {
                int point = 2;
                i ++;
            }
            else if (s[i] == '(') {
                
            }
            else if (s[i] == ')') {
                
            }
            else {
                long tmp = 0;
                while (i <= end && s[i] >= '0' && s[i] <= '9') {
                    tmp = tmp * 10 + s[i] - '0';
                    i ++;
                }
                if (point == 1) {
                    tmp *= nums.top();
                    nums.pop();
                    point = 0;
                }
                else if (point == 2) {
                    tmp = nums.top() / tmp;
                    nums.pop();
                    point = 0;
                }
                nums.push(tmp);
            }
        }

        while (!opts.empty()) {
            res += ops.top() * nums.top();
            ops.pop();
            nums.pop();
        }
        
        return res;
    }
};
