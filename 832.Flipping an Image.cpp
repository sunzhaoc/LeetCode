/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-02 20:48:17
 * @LastEditTime: 2021-03-02 20:55:26
 * @FilePath: \Leetcode\832.Flipping an Image.cpp
 */
/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */

// @lc code=start 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;


/*
RESULT: Accept
TIME:    12ms    BEAT: 35.22%    O(n) = nm
MEMORY: 8.6MB    BEAT:  8.29%    O(n) = 1
USED TIME: 02:41
LAST EDIT TIME: 2021年3月2日20:51:57
Description: 
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i ++) {
            reverse(image[i].begin(), image[i].end());
        }
        for (int i = 0; i < image.size(); i ++) {
            for (int j = 0; j < image[0].size(); j ++) {
                image[i][j] = image[i][j] == 0 ? 1 : 0;
            }
        }
        return image;
    }
};

// @lc code=end

