/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-30 18:24:57
 * @LastEditTime: 2021-01-30 20:17:33
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
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
LAST EDIT TIME: 
Description: 
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
            if (nums[left] == nums[right]) {
                left ++;
                continue;
            }

            // Front
            if (nums[left] <= nums[mid])
        }
    }
};
// @lc code=end

