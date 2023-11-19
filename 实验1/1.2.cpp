#include<iostream>
using namespace std;
int main() {
	int r, h;
	cout << "请输入圆锥的半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	double pai = 3.14;
	cout << "圆锥的体积为" << static_cast<double>(1) / 3 * pai * r * r * h << endl;
}

