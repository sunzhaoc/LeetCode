/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-03 22:53:19
 * @LastEditTime: 2020-12-03 23:04:02
 * @FilePath: \Leetcode\0.test.cpp
 */


#include <math.h>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        for(int i = 1; i < pow(10, n); i ++)
            res.push_back(i);
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> ans = sol.printNumbers(3);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}