/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-28 21:56:29
 * @LastEditTime: 2020-12-28 22:03:58
 * @FilePath: \Leetcode\1706.Where Will the Ball Fall.cpp
 */

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();

        vector<int> ans;
        
        for (int i = 0; i < col; i ++) {
            ans.push_back(i);
        }

        for (int i = 0; i < row; i ++) {
            for (int j = 0; j < col; j ++) {
                if (ans[j] == -1) continue;
            }
        }
    }
};


int main() {
    Solution sol;
    vector<vector<int>> grid = {};
    vector<int> ans = sol.findBall(grid);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}