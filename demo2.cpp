/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:45:58
 * @LastEditTime: 2021-01-31 11:38:30
 * @FilePath: \Leetcode\demo2.cpp
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
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> map;
        for (auto it: adjacentPairs) {
            auto it0 = map.find(it[0]);
            auto it1 = map.find(it[1]);
            
            if (it0 == map.end() && it1 == map.end()) {
                map[it[0]].push_back(it[1]);
                map[it[0]].push_back(it[0]);
                map[it[1]].push_back(it[0]);
                map[it[1]].push_back(it[1]);
            }
            else if (it0 != map.end() && it1 != map.end()) {
                map[map[it[0]][0]].resize(map[it[0]].size() + map[it[1]].size());
                map[map[it[1]][0]].resize(map[it[0]].size() + map[it[1]].size());
                merge(map[it[0]].begin(), map[it[0]].end(), map[it[1]].end(), map[it[1]].begin(), map[map[it[1]][0]]);
                merge(map[it[1]].begin(), map[it[1]].end(), map[it[0]].end(), map[it[0]].begin(), map[map[it[0]][0]]);
                map[it[0]].clear();
                map[it[1]].clear();
            }
            else if (it0 != map.end()) {
                map[map[it[0]][0]].clear();
                map[it[0]].push_back(it[1]);
                map[it[1]] = map[it[0]];
                reverse(map[it[0]].begin(), map[it[0]].end());
                map[map[it[0]][map[it[0]].size() - 1]] = map[it[0]];
                map[it[0]].clear();
            }
            else if (it1 != map.end()) {
                map[map[it[1]][0]].clear();
                map[it[1]].push_back(it[0]);
                map[it[0]] = map[it[1]];
                reverse(map[it[1]].begin(), map[it[1]].end());
                map[map[it[1]][map[it[1]].size() - 1]] = map[it[1]];
                map[it[1]].clear();
            }
        }
        int V = 1;
    }
};




int main() {
    Solution sol;
    vector<vector<int>> tmp = {{1,2} , {3,4}, {2, 3}};
    vector<int> ans = sol.restoreArray(tmp);
    for (int i = 0 ;i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}

