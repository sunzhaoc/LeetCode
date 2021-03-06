/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-14 21:35:06
 * @LastEditTime: 2021-01-14 22:36:09
 * @FilePath: \Leetcode\454.4Sum II.cpp
 */
/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;


/*
RESULT: Accept
TIME:    188ms    BEAT: 98.61%    O(n) = n^2
MEMORY: 28.4MB    BEAT: 95.96%    O(n) = n^2
LAST EDIT TIME: 2021年1月14日22:35:39
Description: 分组 + 哈希。改进了一下空间法度。
*/

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> map1, map2;
        for (int &i: A) {
            for (int &j: B) {
                map1[i + j] ++;
            }
        }

        int count = 0;

        for (int &i: C) {
            for (int &j: D) {
                if (map1.find(0 -i - j) != map1.end()) {
                    count += map1.find(-i-j)->second;
                }
            }
        }

        return count;
    }
};


/*
RESULT: Accept
TIME:  324ms    BEAT: 98.01%    O(n) = n^2
MEMORY: 46MB    BEAT: 27.51%    O(n) = n^2
USED TIME: 35:20
LAST EDIT TIME: 2021年1月14日22:13:16
Description: 分组 + 哈希。
*/

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> map1, map2;
        for (int &i: A) {
            for (int &j: B) {
                map1[i + j] ++;
            }
        }

        for (int &i: C) {
            for (int &j: D) {
                map2[i + j] ++;
            }
        }

        int count = 0;
        auto x = map1.begin();

        while (x != map1.end()) {
            if (map2.find(0 - x->first) != map2.end()) {
                count += (x->second * map2.find(0 - x->first)->second);
            }
            x ++;
        }

        return count;
    }
};


int main() {
    Solution sol;
    vector<int> A = {0,1,-1};
    vector<int> B = {-1,1,0};
    vector<int> C = {0,0,1};
    vector<int> D = {-1,1,1};
    int ans = sol.fourSumCount(A, B, C, D);
    cout << ans << endl;
    system("pause");
    return 0;
}




// @lc code=end

