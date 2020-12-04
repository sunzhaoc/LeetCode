/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-04 16:36:33
 * @LastEditTime: 2020-12-04 17:00:08
 * @FilePath: \Leetcode\剑指 Offer 58 - II. 左旋转字符串.cpp
 */
#include <string>
#include <iostream>
using namespace std;


/*
RESULT: Accept
TIME:     4ms    BEAT 89.91%    O(n) = 1?
MEMORY: 8.1MB    BEAT  9.79%    O(n) = 1?
Description:
*/
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return (s + s).substr(n, s.size());
    }
};


int main(){
    Solution sol;
    string ans = sol.reverseLeftWords("abcdefg", 2);
    cout << ans << endl;
    system("pause");
    return 0;
}