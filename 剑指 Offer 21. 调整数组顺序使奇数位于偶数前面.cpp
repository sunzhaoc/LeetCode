/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 10:47:36
 * @LastEditTime: 2020-12-24 11:26:33
 * @FilePath: \Leetcode\剑指 Offer 21. 调整数组顺序使奇数位于偶数前面.cpp
 */

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < nums.size()) {
            if (left % 2 == 0) {
                
            }
        }
    }
};


/*
RESULT: Accept
TIME:   32ms    BEAT 97.86%    O(n) = 
MEMORY: 18MB    BEAT 54.82%    O(n) = 
Description: 本题要求在原数组中更改，故不能开辟新空间。使用首尾双指针。
*/

// class Solution {
// public:
//     vector<int> exchange(vector<int>& nums) {
//         int left = 0, right = nums.size() - 1;
        
//         while (left < right) {
//             if (nums[left] % 2 == 0 && nums[right] % 2 == 1)    swap(nums[left], nums[right]);
//             if (nums[left] % 2 == 1)    left ++;
//             if (nums[right] % 2 == 0)   right --;
//         }
//         return nums;
//     }
// };


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.exchange(nums);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}