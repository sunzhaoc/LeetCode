/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-06 20:16:46
 * @LastEditTime: 2021-01-07 10:27:17
 * @FilePath: \Leetcode\demo01.cpp
 */


#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        int r = s.length() - 1;
        int l = r;
        string res;
        for (int l = s.length() - 1; l >= 0; l --) {
            if (s[l] == ' ' && l == r) {
                r --;
            }
            else if (s[l] == ' ' && l != r) {
                res += s.substr(l + 1, r - (l + 1) + 1);
                res += ' ';
                r = l - 1;
            }
            else if (l == 0 && l != ' ') {
                res += s.substr(l, r - l + 1);
                return res;
            }
        }
        return res.substr(0, res.length() - 1);
    }
};


int main() {
    Solution sol;
    // string ans = sol.reverseWords("  hello world!  ");
    // string ans = sol.reverseWords("the sky is blue");
    string ans = sol.reverseWords("a good   example");
    cout << ans << endl;
    system("pause");
    return 0;
}
