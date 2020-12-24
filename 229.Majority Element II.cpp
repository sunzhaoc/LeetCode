/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 15:39:47
 * @LastEditTime: 2020-12-24 15:42:30
 * @FilePath: \Leetcode\229.Majority Element II.cpp
 */
/*
 * @lc app=leetcode.cn id=229 lang=cpp
 *
 * [229] 求众数 II
 */

// @lc code=start
#include <iostream>
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
    vector<int> majorityElement(vector<int>& nums) {

    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> ans = sol.majorityElement(nums);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}
// @lc code=end

