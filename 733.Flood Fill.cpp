/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-22 20:42:43
 * @LastEditTime: 2021-01-22 21:05:16
 * @FilePath: \Leetcode\733.Flood Fill.cpp
 */
/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <queue>
using namespace std;


/*
RESULT: Accept
TIME:     12ms    BEAT: 90.49%    O(n) = mn
MEMORY: 13.5MB    BEAT: 84.08%    O(n) = mn
USED TIME: 12:08
LAST EDIT TIME: 2021年1月22日21:3:25
Description: BFS。忘记考虑newcolor和target颜色相同会出现死循环的问题。
*/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int numRow = image.size();
        int numCol = image[0].size();

        int target = image[sr][sc];

        queue<pair<int, int>> neighbour;
        neighbour.push({sr, sc});
        while (!neighbour.empty()) {
            auto it = neighbour.front();
            neighbour.pop();

            int row = it.first, col = it.second;
            image[row][col] = newColor;

            if (row - 1 >= 0 && image[row - 1][col] == target) neighbour.push({row - 1, col});
            if (row + 1 < numRow && image[row + 1][col] == target) neighbour.push({row + 1, col}); 
            if (col - 1 >= 0 && image[row][col - 1] == target) neighbour.push({row, col - 1});
            if (col + 1 < numCol && image[row][col + 1] == target) neighbour.push({row, col + 1});
        }
        
        return image;
    }
};

// @lc code=end

