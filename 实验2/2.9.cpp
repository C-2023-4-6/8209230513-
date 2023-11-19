#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double a, q; int d = 1;
	while (pow(2.0, d + 1) - 2 <= 100)
	{
		d++;
	}
	d--;
	a = pow(2.0, d + 1) - 2;
	q = 0.8 * a / d;
	cout << "每天平均花钱为" << q << endl;
}