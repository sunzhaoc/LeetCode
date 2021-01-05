/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-05 19:27:05
 * @LastEditTime: 2021-01-05 19:55:31
 * @FilePath: \Leetcode\demo01.cpp
 */
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;


class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> map;
        for (char i: s) {
            map[i] = map.find(i) == map.end();
        }
        for (char i: s) {
            if (map[i]) return i;
        }
        return ' ';
    }
};


int main() {
    Solution sol;
    char ans = sol.firstUniqChar("abaccdeff");
    cout << ans << endl;
    system("pause");
    return 0;
}