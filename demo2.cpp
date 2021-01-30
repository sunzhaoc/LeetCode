/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-01-23 17:45:58
 * @LastEditTime: 2021-01-24 11:31:23
 * @FilePath: \Leetcode\demo2.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
using namespace std;




class Solution {
public:
    int minCharacters(string a, string b) {

        if (a.length() == 1 && b.length() == 1) return 0;
        char maxA = 'a';
        char minA = 'z';
        char maxB = 'a';
        char minB = 'z';
        for (int i = 0; i < a.length(); i ++) {
            if (a[i] > maxA) maxA = a[i];
            if (a[i] < minA) minA = a[i];
        }

        for (int i = 0; i < b.length(); i ++) {
            if (b[i] > maxB) maxB = b[i];
            if (b[i] < minB) minB = b[i];
        }

        if (maxA < minB || maxB < minA) return 0;


        int numA = 0;
        // A < B
        for (int i = 0; i < a.length(); i ++) {
            if (a[i] >= minB) numA ++;
        }
        
        int numA2 = 0;
        // A > B
        for (int i = 0; i < a.length(); i ++) {
            if (a[i] <= maxB) {
                char tmp = a[i];
                numA2 ++;
                }

        }

        int numB = 0;
        for (int i = 0; i < b.length(); i ++) {
            if (b[i] <= maxA) numB ++;
        }

        int numB2 = 0;
        for (int i = 0; i < b.length(); i ++) {
            if (b[i] >= minA) numB2 ++;
        }


        int ans = min(min(numA, numB), min(numA2, numB2));

        unordered_map<char, int> mapA;
        for (int i = 0; i < a.length(); i ++) {
            mapA[a[i]] ++;
        }

        unordered_map<char, int> mapB;
        for (int i = 0; i < b.length(); i ++) {
            mapB[b[i]] ++;
        }

        int tmpnum = INT_MAX;
        auto itA = mapA.begin();
        while (itA != mapA.end()) {
            auto xxx = mapB.find(itA->first);
            if (xxx != mapB.end()) {
                int tmpmin = a.length() - itA->second + b.length() - xxx->second;
                tmpnum = min(tmpnum, tmpmin);
            }
            itA ++;
        }


        int tmpnum2= INT_MAX;
        auto itB = mapB.begin();
        while (itB != mapB.end()) {
            auto xxx = mapA.find(itB->first);
            if (xxx != mapA.end()) {
                int tmpmin = b.length() - itB->second + a.length() - xxx->second;
                tmpnum2 = min(tmpnum2, tmpmin);
            }
            itB ++;
        }

        int ans2 = min(tmpnum, tmpnum2);
        return min(ans, ans2);
        
    }
};




int main() {
    Solution sol;
    string a = "ace";
    string b = "abe";

    int ans = sol.minCharacters(a, b);
    cout << ans << endl;
    system("pause");
    return 0;
}

