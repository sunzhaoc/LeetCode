/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-18 14:59:34
 * @LastEditTime: 2021-01-18 15:30:23
 * @FilePath: \Leetcode\611.Valid Triangle Number.cpp
 */
/*
 * @lc app=leetcode.cn id=611 lang=cpp
 *
 * [611] 有效三角形的个数
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
    int triangleNumber(vector<int>& nums) {

    }
};


/*
RESULT: Time Out
TIME:   ms    BEAT: %    O(n) = n^3
MEMORY: MB    BEAT: %    O(n) = 1
LAST EDIT TIME: 
Description: 暴力法。
*/

// class Solution {
// public:
//     int triangleNumber(vector<int>& nums) {
//         vector<int> tmp;
//         vector<int> tmp2;
//         int count = 0;
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i ++) {
//             if (nums[i] == 0) continue;
//             tmp.push_back(nums[i]);
//             for (int j = i + 1; j < nums.size(); j ++) {
//                 if (nums[j] == 0) continue;
//                 tmp.push_back(nums[j]);
//                 for (int k = j + 1; k < nums.size(); k ++) {
//                     if (nums[k] == 0) continue;
//                     tmp.push_back(nums[k]);
//                     tmp2 = tmp;
//                     sort(tmp2.begin(), tmp2.end());
//                     if (tmp2[0] + tmp2[1] > tmp[2]) {
//                         count ++;
//                         tmp.pop_back();
//                     }
//                     else {
//                         tmp.pop_back();
//                         break;
//                     }
//                 }
//                 tmp.pop_back();
//             }
//             tmp.pop_back();
//         }
//         return count;
//     }
// };


int main() {
    Solution sol;
    // vector<int> nums = {2,2,3,4};
    // vector<int> nums = {0,1,1,1};
    vector<int> nums = {1,2,3,4,5,6};
    int ans = sol.triangleNumber(nums);
    cout << ans << endl; 
    system("pause");
    return 0;
}

// @lc code=end

