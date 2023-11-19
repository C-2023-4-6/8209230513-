#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x;
	cout << "请输入x的值" << endl;
	cin >> x;
	if (0 < x && x < 1)
	{
		cout << "y的值为" << fixed << setprecision(2) << 3 - 2 * x << endl;
	}
	else if (1 <= x && x < 5)
	{
		cout << "y的值为" << 2 / (4 * x) + 1 << endl;
	}
	else if (5 <= x && x < 10)
	{
		cout << "y的值为" << x * x << endl;
	}
	else
	{
		cout << "输入的值不在范围内" << endl;
	}
	return 0;
}