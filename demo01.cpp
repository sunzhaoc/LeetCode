/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-17 10:13:36
 * @LastEditTime: 2021-01-17 10:40:15
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> map;

        int max_num = 0;
        
        for (int i = 0; i < rectangles.size(); i ++) {
            int tmp = min(rectangles[i][0], rectangles[i][1]);
            map[tmp] ++;
            if (tmp > max_num) {
                max_num = tmp;
            }
        }

        return map[max_num];
    }
};


int main() {
    Solution sol;
    vector<vector<int>> nums = {{5,8},{3,9},{5,12},{16,5}};
    int ans = sol.countGoodRectangles(nums);
    system("pause");
    return 0;
}