#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "输入三角形的三边" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "此三角形不存在" << endl;
	}
	else
	{
		cout << "此三角形周长为" << a + b + c << endl;
	}
	if (a == b || a == c || b == c)//两个等于号是判断，一个是赋值
	{
		cout << "这是一个等腰三角形" << endl;
	}
	else {
		cout << "这不是一个等腰三角形" << endl;
	}
}