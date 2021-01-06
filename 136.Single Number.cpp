/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-02 21:14:42
 * @LastEditTime: 2021-01-06 16:49:51
 * @FilePath: \Leetcode\136.Single Number.cpp
 */
/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


/*
Accept: 17.81 22.10
异或
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
// @lc code=end

