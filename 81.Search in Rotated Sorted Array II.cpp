/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-30 18:24:57
 * @LastEditTime: 2021-01-30 21:40:23
 * @FilePath: \Leetcode\81.Search in Rotated Sorted Array II.cpp
 */
/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
using namespace std;


/*
RESULT: Accept
TIME:     12ms    BEAT: 15.17%    O(n) = 
MEMORY: 13.6MB    BEAT: 21.63%    O(n) = 
LAST EDIT TIME: 2021年1月30日21:9:43
Description: 二分查找。边界条件有点难找。
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.size() == 0) return false;

        int left = 0, right = nums.size() - 1;
        int mid;
        while (left <= right) {
            mid = (right - left) / 2 + left;

            if (nums[mid] == target) return true;
            
            if (nums[left] == nums[mid]) {
                left ++;
                continue;
            }

            // Front
            if (nums[left] < nums[mid]) {
                if (nums[left] <= target && nums[mid] > target) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};
// @lc code=end

