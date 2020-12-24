/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 10:47:36
 * @LastEditTime: 2020-12-24 11:11:06
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int temp;
        
        while (left < right) {
            if (nums[left] % 2 == 0 && nums[right] % 2 == 1)    swap(nums[left], nums[right]);
            if (nums[left] % 2 == 1)    left ++;
            if (nums[right] % 2 == 0)   right --;
        }
        return nums;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.exchange(nums);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}