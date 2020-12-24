/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 14:22:36
 * @LastEditTime: 2020-12-24 14:29:29
 * @FilePath: \Leetcode\剑指 Offer 38. 字符串的排列.cpp
 */
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<string> permutation(string s) {
        
    }
};


int main() {
    Solution sol;
    vector<string> ans = sol.permutation("abc");
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}