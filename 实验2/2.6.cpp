#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, temp;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}//调整n保存较大的值
	c = a * b;
	while (b != 0)
	{
		d = a % b;
		a = b;
		b = d;
	}//除数除以余数，直到出现了0
	cout << "它们的最大公约数为" << a << endl;
	cout << "它们的最小公倍数为" << c << endl;
}