/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-04 16:36:33
 * @LastEditTime: 2020-12-04 17:08:08
 * @FilePath: \Leetcode\0.test.cpp
 */
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin(), s.begin() + n);
        reverse(s.begin() + n, s.end());
        reverse(s.begin(), s.end());

        return s;
    }
};


int main(){
    Solution sol;
    string ans = sol.reverseLeftWords("abcdefg", 2);
    cout << ans << endl;
    system("pause");
    return 0;
}