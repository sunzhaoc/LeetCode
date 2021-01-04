/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Vicro
 * @Date: 2020-12-16 15:03:59
 * @LastEditTime: 2020-12-31 18:29:22
 * @FilePath: \Leetcode\demo01.cpp
 */
#include <iostream>
#include <cstring>
using namespace std;


class robot
{
	public:
		void out(int a);
		void tran_int(int n);
		~robot(){};
};


char *num1[]=
{
	"","one","two","three","four","five","six","seven","eight",
	"nine","ten","eleven","twelve","thirteen","fourteen",
	"fifteen","sixteen","seventeen","eighteen","nineteen"
};


char *num10[]=
{
	"","","twenty","thirty","forty","fifty","sisty","seventy",
	"eighty","ninety"
};


void robot::out(int a)
{
	int b=a%100;
	if(a/100!=0)
	{
		cout<<num1[a/100]<<" hundred ";
		if(b!=0)
		cout<<"and ";
	}
	if(b<20)
	{
		cout<<num1[b];
	}
	else
	{
		cout<<num10[b/10];
		if(b%10!=0)
		cout<<"-"<<num1[b%10];
	}
}


void robot::tran_int(int n)
{
	if(n>1999999999)
		cout<<"Can not deal with more than 1999999999！"<<endl;
	else
	{
		int a=n/1000000000,b=(n%1000000000)/1000000,c=(n%1000000)/1000,d=n%1000;
		if(a!=0)
		{
			out(a);
			cout<<" billion ";
		}
		if(b!=0)
		{
			out(b);
			cout<<" million ";
		}
		if(c!=0)
		{
			out(c);
			cout<<" thousand ";
		}
		if(d!=0)
		{
			if(d<100&&(a!=0||b!=0||c!=0))
				cout<<"and ";
				out(d);
		}
		cout<<endl;
	} 
}


int main()
{
	int n;
	cout<<"Please input a number: ";
	cin>>n;
	cout<<n<<endl;
	robot a;
	a.tran_int(n);
	system("pause");
	return 0;
}