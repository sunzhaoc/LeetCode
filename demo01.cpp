/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-07 13:13:16
 * @LastEditTime: 2021-01-07 13:34:15
 * @FilePath: \Leetcode\demo01.cpp
 */


#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int joker = 0;
        for (int i = 0; i < 4; i ++) {
            if (nums[i] == 0) joker ++;
            else if (nums[i] == nums[i + 1]) return false;
        }
        
        return nums[4] - nums[joker] < 5;
    }
};


/*
RESULT: Accept
TIME:      4ms    BEAT: 62.00%    O(n) = n = 5 = 1
MEMORY: 10.2MB    BEAT: 75.00%    O(n) = n = 5 = 1
USED TIME: 12:00
Description: 
*/

// class Solution {
// public:
//     bool isStraight(vector<int>& nums) {
//         int countZero = 0;
//         int minNum = 999, maxNum = -1;
//         set<int> repeat;

//         for (int i: nums) {
//             if (i == 0) countZero ++;
//             else {
//                 minNum = min(minNum, i);
//                 maxNum = max(maxNum, i);
//                 if (repeat.find(i) != repeat.end()) return false;
//                 repeat.insert(i);
//             }
//         }
        
//         return maxNum - minNum < 5;
//     }
// };


int main() {
    Solution sol;
    vector<int> nums = {0, 0, 2, 2, 5};
    bool ans = sol.isStraight(nums);
    cout << ans << endl;
    system("pause");
    return 0;
}
