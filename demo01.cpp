/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-06 17:00:42
 * @LastEditTime: 2021-01-06 17:06:32
 * @FilePath: \Leetcode\demo01.cpp
 */

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int x = 0;

        for (int i: nums) {
            x ^= i;
        }

        int first = 1;
        first <<= 1;
        while (!(first & x)) {
            first <<= 1;
        }
    }
};


int main() {
    Solution sol;
    vector<int> nums = {4, 1, 4, 6};
    vector<int> ans = sol.singleNumbers(nums);
    system("pause");
    return 0;
}


