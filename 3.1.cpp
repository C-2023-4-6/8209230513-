#include<iostream>
using namespace std;
int nb(int a, int b)
{
	int c, d,e;
	c = (a > b ? a : b);
	d = (a > b ? b : a);
	while (d != 0)
	{
		int temp = c % d;
		c = d;
		d = temp;
	}
	e = c;
	return e;
}

int main()
{
	int x, y;
	cout << "请输入你的数字" << endl;
	cin >> x >> y;
	cout<<"最大公因数为"<<nb(x, y);
	cout << "最小公倍数为" << x * y / nb(x, y) << endl;
}