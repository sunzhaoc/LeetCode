/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-12-04 21:38:36
 * @LastEditTime: 2020-12-04 22:14:41
 * @FilePath: \Leetcode\0.test.cpp
 */
#include <iostream>
using namespace std;


class Solution {
public:
    int recursion(int n, int m){
        if (n == 1) return 0;

        int x = recursion(n - 1, m);
        
    }

    int lastRemaining(int n, int m) {
        return recursion(n, m);
    }
};


int main(){
    Solution sol;
    int ans = sol.lastRemaining(5, 3);
    cout << ans << endl;
    system("pause");
    return 0;
}