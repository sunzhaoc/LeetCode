/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-13 17:08:29
 * @LastEditTime: 2021-01-13 17:19:52
 * @FilePath: \Leetcode\167.Two Sum II - Input array is sorted.cpp
 */
/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;


/*
RESULT: Accept
TIME:    12ms    BEAT: 77.21%    O(n) = n
MEMORY: 9.7MB    BEAT: 37.39%    O(n) = 1 因为给定的数组是排序好的，所以不需要额外的空间去排序。
USED TIME: 05:23
LAST EDIT TIME: 2021年1月13日17:18:5
Description: 双指针。
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() - 1;

        while (index1 < index2) {
            if (numbers[index1] + numbers[index2] < target) index1 ++;
            else if (numbers[index1] + numbers[index2] > target) index2 --;
            else {
                if (numbers[index1] + numbers[index2] == target) {
                    return {index1 + 1, index2 + 1};
                }
                while (index1 < index2 && numbers[index1 + 1] == numbers[index1]) index1 ++;
                while (index1 < index2 && numbers[index2 - 1] == numbers[index2]) index2 --;

                index1 ++;
                index2 --;
            }
        }
        return {};
    }
};


int main() {
    Solution sol;
    vector<int> numbers = {2,7,11,15};
    vector<int> ans = sol.twoSum(numbers, 9);
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}

// @lc code=end

