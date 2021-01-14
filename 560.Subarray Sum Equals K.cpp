/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-14 16:57:09
 * @LastEditTime: 2021-01-14 17:23:08
 * @FilePath: \Leetcode\560.Subarray Sum Equals K.cpp
 */
/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
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
RESULT: Time Out
TIME:   ms    BEAT: %    O(n) = n^2
MEMORY: MB    BEAT: %    O(n) = 1
USED TIME: < 20:00
LAST EDIT TIME: 2021年1月14日17:21:11
Description: 用了和官解一样的方法，超时。官解也超时。。。
*/

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int res = 0;

//         for (int i = 0; i < nums.size(); i ++) {
//             int sum = 0;
//             int point = i;

//             while (point < nums.size()) {
//                 sum += nums[point++];
//                 if (sum == k) {
//                     res ++;
//                 }
//             }
//         }
//         return res;
//     }
// };


int main() {
    Solution sol;
    // vector<int> nums = {-1,-1,1};
    // int k = 0;
    // vector<int> nums = {0};
    // int k = 0;
    // vector<int> nums = {1,-1,0};
    // int k = 0;
    vector<int> nums = {0,0};
    int k = 0;
    int ans = sol.subarraySum(nums, k);
    cout << ans << endl; 
    system("pause");
    return 0;
}

// @lc code=end

