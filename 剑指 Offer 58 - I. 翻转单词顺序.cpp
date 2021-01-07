/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-06 20:16:46
 * @LastEditTime: 2021-01-06 20:30:10
 * @FilePath: \Leetcode\剑指 Offer 58 - I. 翻转单词顺序.cpp
 */

#
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string path = "";
        vector<int> temp;
        temp.clear();
        for (char i: s) {
            char a = i;
            if (a == ' ') {
                temp.push_back(path);
                path = "";
            }
            else {
                path += i;
            }
        }
        temp.push_back(path);

        for (int i = temp.size() - 1; i >= 0; i --) {
            res += temp[i];
            if (i != 0)     res += " ";
        }

        return res;
    }
};
