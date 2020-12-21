/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-21 22:04:29
 * @LastEditTime: 2020-12-21 22:32:56
 * @FilePath: \Leetcode\240.Search a 2D Matrix II.cpp
 */
/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};


int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {}};
    bool ans = sol.searchMatrix(matrix, 5);
    cout << ans << endl;
    system("pause");
    return 0;
}
// @lc code=end

