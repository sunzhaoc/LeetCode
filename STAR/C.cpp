/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2021-03-04 21:46:19
 * @LastEditTime: 2021-03-04 21:50:15
 * @FilePath: \Leetcode\STAR\C.cpp
 */


// 快速计算x的二进制里有多少个1.
int main() {
    int num = 0;
    int x = 9999;
    for (int k = x; k; k >>= 1) num += k & 1;  
}