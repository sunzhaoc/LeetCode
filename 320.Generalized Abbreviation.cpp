/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-18 14:12:26
 * @LastEditTime: 2021-01-18 14:59:20
 * @FilePath: \Leetcode\320.Generalized Abbreviation.cpp
 */



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;


/*
RESULT: Accept
TIME:     44ms    BEAT: 91.30%    O(n) = 
MEMORY: 20.8MB    BEAT: 43.48%    O(n) = 
LAST EDIT TIME: 回溯。有点变态。
Description: 
*/

class Solution {
public:
    vector<string> ans;
    string word;
    vector<string> generateAbbreviations(string w) {
        word = w;
        track_back(0, 0, "");
        return ans;
    }

    void track_back(int index, int count, string tmp) {
        if (index == word.size()) {
            if (count) {
                tmp += to_string(count);
            }
            ans.push_back(tmp);
            return;
        }

        track_back(index + 1, count + 1, tmp);
        if (count) {
            tmp += to_string(count);
        }
        
        track_back(index + 1, 0, tmp + word[index]);
    }
};


int main() {
    Solution sol;
    vector<string> ans = sol.generateAbbreviations("word");
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << endl;
    }
    system("pause");
    return 0;
}
