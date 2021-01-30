/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:45:58
 * @LastEditTime: 2021-01-24 10:41:02
 * @FilePath: \Leetcode\demo1.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
using namespace std;


class Solution {
public:
    string maximumTime(string time) {
        for (int i = 0; i < time.length(); i ++) {
            
            if (time[i] == '?' && i == 0 && (time[1] == '?' )) {
                time[i] = '2';
            }
    
            if (time[i] == '?' && i == 0 && (time[1] < '4' )) {
                time[i] = '2';
            }
            if (time[i] == '?' && i == 0 && (time[1] >= '4' )) {
                time[i] = '1';
            }
            if (time[i] == '?' && i == 1 && time[0] == '2') {
                time[i] = '3';
            }
            if (time[i] == '?' && i == 1 && (time[0] == '1' || time[0] == '0')) {
                time[i] = '9';
            }
            if (time[i] == '?' && i == 3) {
                time[i] = '5';
            }
            if (time[i] == '?' && i == 4) {
                time[i] = '9';
            }
        }

        return time;
    }
};



int main() {
    Solution sol;
    string A = "?0:?5";
    string ans = sol.maximumTime(A);
    cout << ans << endl; 
    system("pause");
    return 0;
}