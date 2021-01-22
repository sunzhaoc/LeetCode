/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-22 14:24:34
 * @LastEditTime: 2021-01-22 14:52:35
 * @FilePath: \Leetcode\200.Number of Islands.cpp
 */
/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;



class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

    }
};


/*
RESULT: Accept
TIME:    20ms    BEAT: 95.60%    O(n) = MN
MEMORY: 9.1MB    BEAT: 99.37%    O(n) = MN
USED TIME: 19:40
LAST EDIT TIME: 2021年1月22日14:48:22
Description: DFS。本来打算是新开一个vector<vector<bool>>来记录岛屿有没有被遍历。后来发现直接在原来的grid上改就行了。
*/

// class Solution {
// public:
//     void dfs(vector<vector<char>>& choseIsland, int x, int y) {
//         choseIsland[x][y] = '0';

//         if (x - 1 >= 0 && choseIsland[x - 1][y] == '1') dfs(choseIsland, x - 1, y);
//         if (x + 1 < choseIsland.size() && choseIsland[x + 1][y] == '1') dfs(choseIsland, x + 1, y);
//         if (y - 1 >= 0 && choseIsland[x][y - 1] == '1') dfs(choseIsland, x, y - 1); 
//         if (y + 1 < choseIsland[0].size() && choseIsland[x][y + 1] == '1') dfs(choseIsland, x, y + 1);
//     }

//     int numIslands(vector<vector<char>>& grid) {

//         int ans = 0;
//         for (int i = 0; i < grid.size(); i ++) {
//             for (int j = 0; j < grid[0].size(); j ++) {
//                 if (grid[i][j] == '0') continue;
//                 dfs(grid, i, j);
//                 ans ++;
//             }
//         }

//         return ans;
//     }
// };


int main() {
    Solution sol;
    vector<vector<char>> grid = {};
    int ans = sol.numIslands(grid);
    cout << ans << endl; 
    system("pause");
    return 0;
}


// @lc code=end

