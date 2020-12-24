/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 18:40:37
 * @LastEditTime: 2020-12-24 18:45:13
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*
RESULT: Accept
TIME:   ms    BEAT %    O(n) = 
MEMORY: MB    BEAT %    O(n) = 
Description: 
*/

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k; i ++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> arr = {3, 2, 1};
    vector<int> ans = sol.getLeastNumbers(arr, 2);
    for (int i = 0; i < ans.size(); i ++) cout << ans[i] << endl;
    system("pause");
    return 0;
}