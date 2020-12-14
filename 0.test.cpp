/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-14 20:07:31
 * @LastEditTime: 2020-12-14 21:24:42
 * @FilePath: \Leetcode\0.test.cpp
 */
/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT %    O(n) = 
MEMORY: MB    BEAT %    O(n) = 
Description: 
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> strs) {
        unordered_map<string, vector<string>> hash_map;
        
        for (auto s: strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            hash_map[temp].push_back(s);
        }

        int len = hash_map.size();
        vector<vector<string>> ans(len);
        int index = 0;
        for (auto s: hash_map) {
            ans[index] = s.second;
            ++ index;
        }

        return ans;
    }
};


int main() {
    Solution sol;
    int A = 0;
    int B = 0;
    vector<vector<string>> ans = sol.groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}
