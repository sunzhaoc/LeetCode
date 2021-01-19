/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-18 22:04:37
 * @LastEditTime: 2021-01-18 22:20:18
 * @FilePath: \Leetcode\525.Contiguous Array.cpp
 */
/*
 * @lc app=leetcode.cn id=525 lang=cpp
 *
 * [525] 连续数组
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
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == 0) {
                nums[i] = -1;
            }
        }

        int max_len = 0;

        unordered_map<int, int> map;
        map[0] = -1;

        int sum = 0;
        for (int i = 0; i < nums.size(); i ++) {
            
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {0,1};
    // vector<int> nums = {0,1,0};
    int ans = sol.findMaxLength(nums);
    cout << ans << endl; 
    system("pause");
    return 0;
}

// @lc code=end

