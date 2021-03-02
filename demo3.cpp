/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:46:03
 * @LastEditTime: 2021-03-02 13:39:42
 * @FilePath: \Leetcode\demo3.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
using namespace std;


// class Solution {
// public:
//     void function(vector<vector<int>>& B) {
//         sort(B.begin(), B.end(), [](const vector<int>& x, const vector<int>& y) {
//             return x[0] > y[0] || (x[0] == y[0] && x[1] < y[1]);
//         });
//         int A = 1;
//     }
    
// };

// bool cmp(const vector<int>& x, const vector<int>& y) {
//     return x[0] > y[0] || (x[0] == y[0] && x[1] > y[1]);
// }

int main() {
    // Solution sol;
    vector<vector<int>> B = {{2, 5}, {6, 6}, {9, 6}, {0, 7}, {2, 3}, {2, 0}, {2, 6}};
    sort(B.begin(), B.end(), [](const vector<int>& x, const vector<int>& y) {
        return x[0] > y[0] || (x[0] == y[0] && x[1] > y[1]);
    });
    // sol.function(B);
    system("pause");
    return 0;
}