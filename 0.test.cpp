/*
 * @Description: 
 * @Version: 1.0
 * @Author: Vicro
 * @Date: 2020-11-25 15:06:00
 * @LastEditTime: 2020-11-26 20:23:52
 * @FilePath: \Leetcode\0.test.cpp
 */
#include <iostream>
#include <string>
using namespace std;

struct node{
    int num;
    char *name;
    float high;
};


int main(){
    node stu1 = {12, "Zhangsan", 234.5, };
    node * tree;
    tree = &stu1;
    // tree = & boy;
    cout << tree->high << endl;
    system("pause");
    return 0;
}