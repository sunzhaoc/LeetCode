/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-11-26 17:24:07
 * @LastEditTime: 2020-11-26 18:46:21
 * @FilePath: \Leetcode\738.Monotone Increasing Digits.cpp
 */
/*
 * @lc app=leetcode.cn id=738 lang=cpp
 *
 * [738] Monotone Increasing Digits
 */

// @lc code=start
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        if (N < 10)
            return N;
        string M = to_string(N);
        int length = M.size();
        
        int index = 0;

        for (int i = 1; i < length; i ++){
            if (M[i] > M[i - 1]){
                index = i;
            }
            if (M[i] < M[i - 1]){
                M[index]--;
                for (int j = (index+1); j < length; j ++){
                    M[j] = '9';
                }
                int ans = stoi(M);
                return ans;
            }
        }
        return N;
    }
};


int main() 
{
    Solution sol1;
    int A = sol1.monotoneIncreasingDigits(332);
    cout << A << endl;
    system("pause");
    return 0;
}
// @lc code=end

