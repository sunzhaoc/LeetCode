/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-16 14:23:43
 * @LastEditTime: 2020-12-16 14:27:52
 * @FilePath: \Leetcode\290.单词规律.cpp
 */
/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

/*
RESULT: Accept
TIME:   ms    BEAT %    O(n) = m + n
MEMORY: MB    BEAT %    O(n) = m + n
Description: 
*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> str2ch;
        unordered_map<char, string> ch2str;
        
        for (auto ch: pattern) {
            
        }
    }
};


int main() {
    Solution sol;
    bool ans = sol.wordPattern("abba", "dog cat cat fish");
    system("pause");
    return 0;
}
// @lc code=end

