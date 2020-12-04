/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-04 16:36:33
 * @LastEditTime: 2020-12-04 16:52:33
 * @FilePath: \Leetcode\0.test.cpp
 */
#include <string>
#include <iostream>
using namespace std;


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