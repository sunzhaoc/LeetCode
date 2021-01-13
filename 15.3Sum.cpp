/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-13 14:23:17
 * @LastEditTime: 2021-01-13 14:30:10
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
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
USED TIME: 
Description: 
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    }
};


int main() {
    Solution sol;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = sol.threeSum(nums);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i][0] << ans[i][1] << ans[i][2] << endl;
    }
    system("pause");
    return 0;
}

// @lc code=end

