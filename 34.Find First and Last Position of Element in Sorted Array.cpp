/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-01 09:37:48
 * @LastEditTime: 2020-12-01 10:45:54
 * @FilePath: \Leetcode\34.Find First and Last Position of Element in Sorted Array.cpp
 */
/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0){
            return {-1, -1};
        }
        int left = 0, right = nums.size() - 1, mid = 0;
        
        while (left < right)
        {
            mid = (right - left) / 2 + left;
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        if (nums[left] != target)
        {
            return {-1, -1};
        }            

        int leftIdx = left;
        // return {leftIdx, right};
        // int left = left;
        right = nums.size() - 1;

        while (left < right)
        {
            mid = (right - left + 1) / 2 + left;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid;
            }
        }
        return {leftIdx, right};
    }
};
// @lc code=end

