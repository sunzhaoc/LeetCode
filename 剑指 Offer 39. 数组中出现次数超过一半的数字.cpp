/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 14:52:46
 * @LastEditTime: 2020-12-24 15:05:18
 * @FilePath: \Leetcode\剑指 Offer 39. 数组中出现次数超过一半的数字.cpp
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> dic;
        for (int i = 0; i < nums.size(); i ++) {
            
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int ans = sol.majorityElement(nums);
    system("pause");
    return 0;
}