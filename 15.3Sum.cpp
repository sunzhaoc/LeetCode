/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-21 22:51:36
 * @LastEditTime: 2020-12-21 23:03:36
 * @FilePath: \Leetcode\15.3Sum.cpp
 */
/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT %    O(n) = 
MEMORY: MB    BEAT %    O(n) = 
Description: 
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3)    return {};
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() - 2; i ++) {
            for (int j = i + 1; j < nums.size() - 1; j ++) {
                for (int k = j + 1; k < nums.size(); k ++) {
                    if (nums[i] + nums[j] + nums[k] == 0)   ans.push_back{num[i], nums[j], nums[k]};
                }
            }
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = sol.threeSum(nums);
    // cout << << endl;
    return 0;
}

// @lc code=end

