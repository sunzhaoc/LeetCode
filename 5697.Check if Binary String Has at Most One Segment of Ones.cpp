/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-07 10:18:55
 * @LastEditTime: 2021-03-07 10:37:35
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
using namespace std;


class Solution {
public:
    bool checkOnesSegment(string s) {
        if (s.length()==0) return false;
        if (s.length() == 1 && s[0] == '1') return true;
        bool tmp = true;
        for (int i = 0; i < s.length(); i ++){
            if (s[i] == '1' && tmp) continue;
            else if (s[i] == '0') {
                tmp = false;
            }
            else if (s[i] == '1' && !tmp) return false;
        }
        return true;
        
    }
};


int main() {
    Solution sol;
    bool ans = sol.checkOnesSegment("1111");
    cout << ans << endl;
    system("pause");
    return 0;
}

