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
	cout << "�������������" << endl;
	cin >> x >> y;
	cout<<"�������Ϊ"<<nb(x, y);
	cout << "��С������Ϊ" << x * y / nb(x, y) << endl;
}