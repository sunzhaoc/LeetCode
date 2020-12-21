/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-21 14:03:57
 * @LastEditTime: 2020-12-21 14:12:23
 * @FilePath: \Leetcode\191.Number of 1 Bits.cpp
 */
/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
#include <stdint.h>
#include <iostream>
using namespace std;

/*
RESULT: Accept
TIME:     0ms    BEAT 100.00%    O(n) = 
MEMORY: 6.3MB    BEAT   5.96%    O(n) = 
Description: 位运算。
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n)
        {
            n = n & (n - 1);
            count ++;
        }
        return count;        
    }
};


int main() {
    Solution sol;
    int ans = sol.hammingWeight(00000000000000000000000000001011);
    cout << ans << endl;
    system("pause");
    return 0;
}

// @lc code=end

