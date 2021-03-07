/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-07 10:18:55
 * @LastEditTime: 2021-03-07 10:57:55
 * @FilePath: \Leetcode\demo02.cpp
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#include <numeric>
using namespace std;

class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long sum = goal;
        for (int i = 0; i < nums.size(); i ++) {
            sum -= nums[i];
        }
        if (abs(sum) <= limit) return 1;
        sum = abs(sum);
        return sum % limit == 0 ? sum / limit : (sum / limit) + 1;
        
        
    }
};



int main() {
    Solution sol;
    vector<int> nums = {1,-1,1};
    int ans = sol.minElements(nums, 3, -4);
    // vector<int> nums = {1,-10,9,1};
    // int ans = sol.minElements(nums, 100, 0);
    // vector<int> nums = {1,-10,9,1};
    // int ans = sol.minElements(nums, 100, 0);
    cout << ans << endl; 
    system("pause");
    return 0;
}
