/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-21 22:04:29
 * @LastEditTime: 2020-12-21 22:37:08
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


/*
RESULT: Accept
TIME:   184ms    BEAT 37.57%    O(n) = n + m
MEMORY:  15MB    BEAT  5.74%    O(n) = 1
Description: 
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        int row = 0, col = matrix[0].size() - 1;
        
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] > target) col --;
            else row ++;
        }
        return false;
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

