/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-15 20:34:24
 * @LastEditTime: 2020-12-15 20:42:19
 * @FilePath: \Leetcode\1.cpp
 */

#include <iostream>
using namespace std;


/*
RESULT: Accept
TIME:     0ms    BEAT 100.00%    O(n) = 
MEMORY: 4.2MB    BEAT  27.80%    O(n) = 
Description: 
*/

class Solution {
public:
    int numWays(int n) {
        int a = 1, b = 1;
        int temp;
        for (int i = 0; i < n; i ++) {
            temp = a;
            a = b;
            b = (temp + b) % 1000000007;
        }
        return a;
    }
};


int main() {
    Solution sol;
    int ans = sol.numWays(3);
    cout << ans << endl;
    system("pause");
    return 0;
}