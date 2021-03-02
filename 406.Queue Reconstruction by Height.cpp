/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-02 10:03:42
 * @LastEditTime: 2021-03-02 13:27:47
 * @FilePath: \Leetcode\406.Queue Reconstruction by Height.cpp
 */
/*
 * @lc app=leetcode.cn id=406 lang=cpp
 *
 * [406] 根据身高重建队列
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT: %    O(n) = 
MEMORY: MB    BEAT: %    O(n) = 
USED TIME: 
LAST EDIT TIME: 
Description: 
*/

class Solution {
public:

    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;

        // ------------------IMPORTANT----------------------
        // sort(people.begin(), people.end(), [](const vector<int>& u, const vector<int>& v) {
        //     return u[0] > v[0] || (u[0] == v[0] && u[1] < v[1]);    // 第一维降序，第二维升序。
        // });
        // ------------------IMPORTANT----------------------

        sort(people.begin(), people.end(), cmp);
        
        int Z = 1;
        // for (const vector<int>& person: people) {
        //     ans.insert(ans.begin() + person[1], person);
        // }

        return ans;
    }

    bool cmp(const vector<int>& x, const vector<int>& y) {
        return x[0] > y[0];
    }
};


int main() {
    Solution sol;
    vector<vector<int>> people = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    vector<vector<int>> ans = sol.reconstructQueue(people);
    for (int i = 0; i < ans.size(); i ++) {
        for (int j = 0; j < ans[0].size(); j ++) {
            cout << ans[i][j] << " "; 
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
// @lc code=end

