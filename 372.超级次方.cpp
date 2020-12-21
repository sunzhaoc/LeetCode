/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-21 15:14:19
 * @LastEditTime: 2020-12-21 15:31:59
 * @FilePath: \Leetcode\372.超级次方.cpp
 */
/*
 * @lc app=leetcode.cn id=372 lang=cpp
 *
 * [372] 超级次方
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        int last = b.back();
        b.pop_back();

        int part1 = myPow(a, last);
        int part2 = myPow(superPow(a, b), 10);

        return part1 * part2;
    }

private:
    int myPow(int a, int k) {
        
    }
};


int main() {
    Solution sol;
    vector<int> b = {3};
    int ans = sol.superPow(2, b);
    cout << ans << endl;
    return 0;
}
// @lc code=end

