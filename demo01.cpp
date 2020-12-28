/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-24 18:40:37
 * @LastEditTime: 2020-12-28 22:37:59
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
    vector<int> ans = {1, 2, 4, 5};
    bool A = (ans[5] == 2);
    cout << A << endl;

    system("pause");
    return 0;
}