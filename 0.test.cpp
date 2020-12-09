/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-11-25 15:06:00
 * @LastEditTime: 2020-12-09 14:58:32
 * @FilePath: \Leetcode\0.test.cpp
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> inorder = {1, 2, 3, 4, 5};
    vector<int> preorder = {5, 4, 3, 2, 1};

    // int mid;
    // for (mid = 0; mid <= 4; mid ++) {
    //     if (inorder[mid] == preorder[1]) break;
    // }

    int mid = 0;
    while (mid <= 4) {
        if (inorder[mid] == preorder[1])  break;
        mid ++;
    }

    cout << mid << endl;

    system("pause");
    return 0;
};