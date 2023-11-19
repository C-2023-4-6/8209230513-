#include<iostream>
using namespace std;
int main()
{
	int a, x, c;
	cout << "请输入初始值" << endl;
	cin >> a;
	x = a; c = (x + a / x) / 2;
	for (; fabs(c - x) > 10e-5; x = c, c = (x + a / x) / 2)
	{

	}
	cout << "所求平方根为" << c << endl;
}