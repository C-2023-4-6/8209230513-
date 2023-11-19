#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double T;
	cout << "请输入华氏温度" << endl;
	cin >> T;
	cout << "转换为摄氏温度为" << endl;
	double t = (T - 32) / 1.8;
	cout << fixed << setprecision(2) << t << endl;

}