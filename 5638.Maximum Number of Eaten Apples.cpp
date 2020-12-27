/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-27 16:47:16
 * @LastEditTime: 2020-12-27 17:03:36
 * @FilePath: \Leetcode\5638.Maximum Number of Eaten Apples.cpp
 */


#include <vector>
#include <iostream>
#include <map>
using namespace std;


class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        map<int, int> cnt;
        int ans = 0;
        int n = apples.size();

        auto add = [&](int i) {
            if (apples[i]) cnt[i + days[i]] += apples[i];
        };
        
        auto eat = [&](int i) {
            while (!cnt.empty() && cnt.begin()->first <= i) cnt.erase(cnt.begin());
            if (!cnt.empty()) {
                ans ++;
                int d = cnt.begin()->first;
                cnt[d] --;
                if (cnt[d] == 0) cnt.erase(cnt.begin());
            }
        };

        for (int i = 0; i < n; ++ i) {
            add(i);
            eat(i);
        }

        for (int i = 0; i < n; ++ i) {
            eat(i);
        }
        return ans;
    }
};


int main() {
    Solution sol;
    int ans = sol.eatenApples();
    cout << ans << endl;
    system("pause");
    return 0;
}