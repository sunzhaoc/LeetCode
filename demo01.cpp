/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-05 20:22:28
 * @LastEditTime: 2021-01-06 15:28:05
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return 0;
        int l = 0, r = nums.size() - 1;
        int mid;

        while (l < r) {
            mid = (r - l) / 2 + l;
            if (nums[mid] >= target) r = mid;
            else l = mid + 1;
        }
        if (nums[l] != target) return 0;
        int res = l;

        l = 0, r = nums.size() - 1;
        while(l < r) {
            mid = (l + r + 1) / 2;
            if (nums[mid] <= target) l = mid;
            else r = mid - 1;
        }
        return r - res + 1;
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