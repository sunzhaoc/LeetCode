/*
 * @Description:  
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-09 10:28:43
 * @LastEditTime: 2020-12-09 10:40:37
 * @FilePath: \Leetcode\0.test.cpp
 */
/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
#include <iostream>
using namespace std;


class Solution {
public:
    int uniquePaths(int m, int n) {
        long long sum_up = 1;
        int sum_down = 1;

        int max = (n >= m)? n : m;
        int min = (n <= m)? n : m;
        for (int i = max; i < min + max - 2 + 1; i ++) {
            sum_up = i * sum_up;
        }
        for (int i = 1; i < min - 1 + 1; i ++) {
            sum_down = i * sum_down;
        }
        return sum_up / sum_down;
    }
};


int main() {
    Solution sol;
    int A = sol.uniquePaths(3, 2);
    cout << A << endl;
    system("pause");
    return 0;
}
// @lc code=end

