#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, e, f, g; char m;
	cout << "请输入你的算式" << endl;
	cin >> a >> m >> b;
	switch ((int)m)
	{
	case 43:
	{
		c = a + b;
		cout << c;
		break;
	}
	case 45:
	{
		d = a - b;
		cout << d;
		break;
	}
	case 42:
	{
		e = a * b;
		cout << e;
		break;
	}
	case 47:
	{
		if (b == 0)
		{
			cout << "wrong";
			break;
		}
		else
		{
			f = a / b;
			cout << f;
			break;
		}
	}
	case 37:
	{
		if ((int)a != a || (int)b != b)
		{
			cout << "wrong";
			break;
		}
		else
		{
			g = (int)a % (int)b;
			cout << g;
			break;
		}
	}
	default:
	{
		cout << "未知运算符" << endl;
		break;
	}
	}
}
