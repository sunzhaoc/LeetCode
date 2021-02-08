/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-02-08 20:54:48
 * @LastEditTime: 2021-02-08 21:03:51
 * @FilePath: \Leetcode\978.Longest Turbulent Subarray.cpp
 */
/*
 * @lc app=leetcode.cn id=978 lang=cpp
 *
 * [978] 最长湍流子数组
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
TIME:     84ms    BEAT: 91.65%    O(n) = n
MEMORY: 42.7MB    BEAT: 25.89%    O(n) = n
LAST EDIT TIME: 2021年2月8日21:3:40
Description: DP
*/

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        vector<int> up_arr(arr.size(), 1), down_arr(arr.size(), 1);
        int ans = 1;

        for (int i = 1; i < arr.size(); i ++) {
            if (arr[i] > arr[i - 1]) {
                up_arr[i] = down_arr[i - 1] + 1;
            }
            else if (arr[i] < arr[i - 1]) {
                down_arr[i] = up_arr[i - 1] + 1;
            }
            ans = max(ans, max(up_arr[i], down_arr[i]));
        }
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {9,4,2,10,7,8,8,1,9};
    int ans = sol.maxTurbulenceSize(nums);
    cout << ans << endl; 
    system("pause");
    return 0;
}
// @lc code=end

