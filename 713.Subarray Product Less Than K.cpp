/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-15 13:46:51
 * @LastEditTime: 2021-01-15 14:38:31
 * @FilePath: \Leetcode\713.Subarray Product Less Than K.cpp
 */
/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于K的子数组
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
USED TIME: 
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left, right, count = 0, x = 1;
        
        for (int i = 0; i < nums.size(); i ++) {
            x *= nums[i];
            if (x >= k) {
                count += 
            }
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {10,5,2,6}; int k = 100;
    // vector<int> nums = {1,1,1}; int k = 0;
    int ans = sol.numSubarrayProductLessThanK(nums, k);
    cout << ans << endl; 
    system("pause");
    return 0;
}

// @lc code=end

