/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-02 09:19:25
 * @LastEditTime: 2021-03-02 09:38:29
 * @FilePath: \Leetcode\46.Permutations.cpp
 */
/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;


/*
RESULT: Accept
TIME:     4ms    BEAT: 80.16%    O(n) = 
MEMORY: 7.7MB    BEAT: 71.12%    O(n) = 
USED TIME: 16:42
LAST EDIT TIME: 2021年3月2日9:38:9
Description: 
*/

class Solution {
public:
    vector<vector<int>> ans;
    vector<bool> used;

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> track;
        used.resize(nums.size(), false);
        dfs(nums, track);
        return ans;
    }
    
    void dfs(vector<int>& nums, vector<int>& track) {
        if (track.size() == nums.size()) {
            ans.emplace_back(track);
            return;
        }
        
        for (int i = 0; i < nums.size(); i ++) {
            if (used[i]) continue;

            track.push_back(nums[i]);
            used[i] = true;

            dfs(nums, track);

            track.pop_back();
            used[i] = false;
        }
    }
};

// @lc code=end

