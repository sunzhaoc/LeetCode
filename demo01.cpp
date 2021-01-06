/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-16 15:03:59
 * @LastEditTime: 2021-01-06 20:07:26
 * @FilePath: \Leetcode\demo01.cpp
 */
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Test
{
public:
    string name;
    explicit Test( const string &name):name(move(name))
    {
        std::cout << "I am being constructed.\n";
    }

    Test(const Test &other):name(std::move(other.name))
    {
        cout << "I am being copy constructed.\n";
    }

    Test( Test &&other):name(move(other.name))
    {
        cout << "I am being moved.\n";
    }
};
int main()
{
	//1>
    std::cout<<"emplace_back:"<<std::endl;
    std::vector<Test>T;
    T.emplace_back("yang");
	//输出 	I am being constructed

	//2>
    std::cout<<"emplace_back2:"<<std::endl;
    std::vector<Test>T4;
    T4.emplace_back(Test("aaaa"));
    //输出 	I am being constructed
    //		I am being moved

	//3>
    std::cout<<"push_back1:"<<std::endl;
    std::vector<Test>T2;
    T2.push_back(Test("a"));
    //输出 	I am being constructed
    //		I am being moved

    //4>
    std::cout<<"push_back2:"<<std::endl;
    std::vector<Test>T3;
    Test t("aaa");
    T3.push_back(t);
     //输出 	I am being constructed
    //		I am being copy constructed


}
