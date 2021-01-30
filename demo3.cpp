/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:46:03
 * @LastEditTime: 2021-01-24 11:58:41
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


class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int numRow = matrix.size(), numCol = matrix[0].size();

        vector<vector<int>> mapRow(numRow, vector<int>(numCol));
        vector<vector<int>> mapCol(numRow, vector<int>(numCol));
        mapRow[0][0] = matrix[0][0];
        mapCol[0][0] = matrix[0][0];


        for (int i = 1; i < numCol; i ++) {
            mapCol[0][i] = mapCol[0][i - 1] ^ matrix[0][i];
        }

        for (int i = 1; i < numRow; i ++) {
            for (int j = 1; j < numCol; j ++) {
                mapCol[i][j] = mapCol[i - 1][j] ^ matrix[i][j];
            }
        }


        for (int i = 1; i < numRow; i ++) {
            mapRow[i][0] = mapRow[i - 1][0] ^ matrix[i][0];
        }

        for (int i = 1; i < numRow; i ++) {
            for (int j = 1; j < numCol; j ++) {
                mapRow[i][j] = mapRow[i][j - 1] ^ matrix[i][j];
            }
        }
        
        vector<vector<int>> map(numRow, vector<int>(numCol));
                map[0][0] = matrix[0][0];
                        for (int i = 1; i < numCol; i ++) {
            map[0][i] = map[0][i - 1] ^ matrix[0][i];
        }
                for (int i = 1; i < numRow; i ++) {
            map[i][0] = map[i - 1][0] ^ map[i][0];
        }
        for (int i = 1; i < numRow; i ++) {
            for (int j = 1; j < numCol; j ++) {
                map[i][j] = mapCol[i - 1][j] ^ mapRow[i][j - 1] ^ matrix[i][j];
            }
        }
        int V = 0;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> matrix = {{5, 2}, {1, 6}};
    int ans = sol.kthLargestValue(matrix, 1);
    cout << ans << endl;
    system("pause");
    return 0;
}