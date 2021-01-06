/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-05 20:22:28
 * @LastEditTime: 2021-01-05 20:26:26
 * @FilePath: \Leetcode\剑指 Offer 53 - I. 在排序数组中查找数字 I.cpp
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int mid;
        while (l < r) {
            mid = (r - l) / 2 + l;
            if (nums[mid] > target) r = mid;
            else l = mid;
        }
        int V = 1;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    int ans = sol.search(nums, 8);
    cout << ans << endl;
    system("pause");
    return 0;
}