#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int X, int Y) {
		x = X;
		y = Y;
	}//构造函数
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "坐标为(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	p.setPoint(40, 30);
	p.display();
	return 0;
}