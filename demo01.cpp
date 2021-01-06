/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-06 18:41:29
 * @LastEditTime: 2021-01-06 19:02:42
 * @FilePath: \Leetcode\demo01.cpp
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        
        while (1) {
            if (nums[l] + nums[r] == target) return {nums[l], nums[r]};
            if (nums[l] + nums[r] > target) r --;
            else l ++;
        }
    }
};


int main() {
    Solution sol;
    // vector<int> nums = {2,7,11,15};
    vector<int> nums = {14,15,16,22,53,60};
    vector<int> ans = sol.twoSum(nums, 76);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}