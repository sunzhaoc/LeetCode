/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


/*
RESULT: Accept
TIME:     8ms    BEAT: 34.65%    O(n) = 
MEMORY: 7.6MB    BEAT: 48.20%    O(n) = 
USED TIME: 19:59
Description: 递归 + 剪枝。
*/

class Solution {
public:
    vector<vector<int>> ans;

    void backTrack(vector<int>& nums, int index, vector<int>& sub_nums){
        ans.push_back(sub_nums);
        if (index == nums.size()) return;

        for (int i = index; i < nums.size(); i ++) {
            if (i > 0 && nums[i] == nums[i - 1] && (i - 1) >= index) continue;
            sub_nums.push_back(nums[i]);
            backTrack(nums, i + 1, sub_nums);
            sub_nums.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> sub_nums;
        sort(nums.begin(), nums.end());
        backTrack(nums, 0, sub_nums);    
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 1};
    vector<vector<int>> ans = sol.subsetsWithDup(nums);
    system("pause");
    return 0;
}

// @lc code=end

