/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 14:52:46
 * @LastEditTime: 2020-12-24 15:15:04
 * @FilePath: \Leetcode\剑指 Offer 39. 数组中出现次数超过一半的数字.cpp
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


/*
RESULT: Accept
TIME:    104ms    BEAT  5.34%    O(n) = n
MEMORY: 18.9MB    BEAT 12.33%    O(n) = n
Description: 哈希表。
*/

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> dic;
//         for (int i = 0; i < nums.size(); i ++) {
//             dic[nums[i]] ++;
//             if (dic[nums[i]] > nums.size() / 2) return nums[i];
//         }
//         return NULL;
//     }
// };


int main() {
    Solution sol;
    // vector<int> nums = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    vector<int> nums = {10, 9, 9, 9, 10};
    int ans = sol.majorityElement(nums);
    cout << ans << endl;
    system("pause");
    return 0;
}