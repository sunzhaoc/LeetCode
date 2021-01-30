/*
 * @Description:  
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-30 16:28:56
 * @LastEditTime: 2021-01-30 17:35:59
 * @FilePath: \Leetcode\80.Remove Duplicates from Sorted Array II.cpp
 */
/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
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
TIME:     12ms    BEAT: 53.30%    O(n) = n
MEMORY: 11.2MB    BEAT:  5.04%    O(n) = n
LAST EDIT TIME: 2021年1月30日16:52:44
Description: 开辟了一个哈希表的空间。
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int left = 0, right = nums.size() - 1;
        unordered_map<int, int> map;
        while (left <= right) {
            if (map[nums[left]] < 2) {
                map[nums[left]] ++;
                left ++;
            }
            else {
                swap(nums[left], nums[right]);
                right --;
            }
        }
        sort(nums.begin(), nums.begin() + right + 1);
        return right + 1;
    }
};
// @lc code=end

