/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-08 21:08:50
 * @LastEditTime: 2020-12-08 21:47:58
 * @FilePath: \Leetcode\0.test.cpp
 */
/*
 * @lc app=leetcode.cn id=842 lang=cpp
 *
 * [842] 将数组拆分成斐波那契序列
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:

    bool backtrack(int pos) {
        if (pos == length)  return res.size() > 2;

        s = 0;
        for (int i = pos; i < length; i ++) {
            s = s * 10 + (int)S[i];
            if (s > m)  break;
            if (res.size() >= 2 && s > res[-1] + res[-2])   break;
            if (S[pos] == '0' && i > pos)   break;
            if (res.size() < 2 || res[-1] + res[-2] == s) {
                res.push_back(s);
                if backtrack(i + 1) return true;
                res.pop_back();
            }
        }
        return false;
    }


    vector<int> splitIntoFibonacci(string S) {
        int m = pow(2, 31) - 1;
        vector<int> res;
        int length = S.size();
        
        int A = 1;

        bool res = backtrack(0);
        // if (res){
        //     return res;
        // }
        // else{
        //     return {};
        // }
        
    }
};


int main() {
    Solution sol;
    vector<int> ans = sol.splitIntoFibonacci("123456579");

    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }

    system("pause");
    return 0;
}
// @lc code=end

