/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-04 14:14:02
 * @LastEditTime: 2020-12-04 14:48:36
 * @FilePath: \Leetcode\0.test.cpp
 */

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>matrix, int target) {
        if (matrix.size() == 0) return false;
        if (matrix[0].size() == 0) return false;
        int min = matrix[0][0], max = matrix[matrix.size() - 1][matrix[0].size() - 1];
        if ((target > max) || (target < min))   return false;

        int row = 0, col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0)
        {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) row ++;
            else col --;                         
        }
        return false;
    }
};


int main(){
    Solution sol;
    bool ans = sol.findNumberIn2DArray({{}}, 20);
    cout << ans << endl;
    system("pause");
    return 0;
}