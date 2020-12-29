/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-29 21:18:04
 * @LastEditTime: 2020-12-29 21:33:21
 * @FilePath: \Leetcode\330.按要求补齐数组.cpp
 */
/*
 * @lc app=leetcode.cn id=330 lang=cpp
 *
 * [330] 按要求补齐数组
 */

// @lc code=start

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long total = 0;
        int count = 0, index = 0;
        while (total < n) {
            if (index < nums.size() && nums[index] <= total + 1) total += nums[index ++];
            else {
                total = total + total + 1;
                count ++;
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {};
    int ans = sol.minPatches(nums, 4);
    cout << ans << endl;
    system("pause");
    return 0;
}
// @lc code=end

