/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:46:03
 * @LastEditTime: 2021-01-31 10:15:09
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
};


int main() {
    Solution sol;
    vector<vector<int>> matrix = {{5, 2}, {1, 6}};
    int ans = sol.kthLargestValue(matrix, 1);
    cout << ans << endl;
    system("pause");
    return 0;
}