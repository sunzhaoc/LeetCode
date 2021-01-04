/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-04 19:06:19
 * @LastEditTime: 2021-01-04 19:11:39
 * @FilePath: \Leetcode\461.汉明距离.cpp
 */
/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start


/*
RESULT: Accept
TIME:     4ms    BEAT 31.20%    O(n) = 
MEMORY: 6.2MB    BEAT 35.06%    O(n) = 
USED TIME: 03:46
Description: 
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        int temp1, temp2;
        
        while (x | y) {
            temp1 = x % 2;
            temp2 = y % 2;
            ans += (temp1 ^ temp2);
            x /= 2;
            y /= 2;
        }
        return ans;
    }
};


/*
RESULT: Accept
TIME:     4ms    BEAT 31.20%    O(n) = 
MEMORY: 6.2MB    BEAT 35.06%    O(n) = 
USED TIME: 03:46
Description: 
*/

// class Solution {
// public:
//     int hammingDistance(int x, int y) {
//         int ans = 0;
//         int temp1, temp2;
        
//         while (x | y) {
//             temp1 = x % 2;
//             temp2 = y % 2;
//             ans += (temp1 ^ temp2);
//             x /= 2;
//             y /= 2;
//         }
//         return ans;
//     }
// };
// @lc code=end

