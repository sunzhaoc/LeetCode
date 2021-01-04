/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-04 09:09:26
 * @LastEditTime: 2021-01-04 10:52:13
 * @FilePath: \Leetcode\131.Palindrome Partitioning.cpp
 */
/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start

#include <vector>
#include <string>
#include <iostream>
using namespace std;


/*
RESULT: Accept
TIME:    300ms    BEAT 11.40%    O(n) = 
MEMORY: 74.5MB    BEAT 22.90%    O(n) = 
Description: 回溯。传地址，优化。
时空差距并没有那么大。
*/

class Solution {

public:
    vector<vector<string>> res = {};

    bool whether_par(string& s) {
        if (s.length() == 1) return true;
        int n = s.length() - 1;
        for (int i = 0; i <= n; i ++) {
            if (s[i] == s[n]) n--;
            else return false ;
        }
        return true;
    }   
    
    void backTrack(const string& unused, vector<string>& used){
        if (unused.empty()) {
            res.push_back({used});
            return;
        }
        
        for (int i = 1; i <= unused.size(); i ++) {
            string sub_str = unused.substr(0, i);
            if (whether_par(sub_str)) {
                used.push_back(sub_str);
                backTrack(unused.substr(i, unused.length() - i), used);
                used.pop_back();
            }
        }
        
        return;
    }

    vector<vector<string>> partition(string s) {
        vector<string> used;
        backTrack(s, used);
        return res;
    }
};


/*
RESULT: Accept
TIME:     420ms    BEAT 5.13%    O(n) = 
MEMORY: 159.8MB    BEAT 5.03%    O(n) = 
USED TIME: 01:19:43
Description: 回溯。传参数，优化。
*/

// class Solution {

// public:
//     vector<vector<string>> res = {};

//     bool whether_par(string s) {
//         if (s.length() == 1) return true;
//         int n = s.length() - 1;
//         for (int i = 0; i <= n; i ++) {
//             if (s[i] == s[n]) n--;
//             else return false ;
//         }
//         return true;
//     }   
    
//     void backTrack(string unused, vector<string> used){
//         if (unused.empty()) {
//             res.push_back({used});
//             return;
//         }
        
//         for (int i = 1; i <= unused.size(); i ++) {
//             if (whether_par(unused.substr(0, i))) {
//                 used.push_back(unused.substr(0, i));
//                 backTrack(unused.substr(i, unused.length() - i), used);
//                 used.pop_back();
//             }
//         }
        
//         return;
//     }

//     vector<vector<string>> partition(string s) {
//         backTrack(s, {});
//         return res;
//     }
// };


int main() {
    Solution sol;
    vector<vector<string>> ans = sol.partition("aab");
    system("pause");
    return 0;
}

// @lc code=end

