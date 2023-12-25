#include<iostream>
using namespace std;
class vi 
{
public:
	void post();
	int ti();
	void get();
private:
	int length;
	int width;
	int height;
	int tiji;
};
void vi::post()
{
	cout << "请输入立方体的长宽高：" << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}
int vi::ti()
{
	
	tiji = length * width * height;
	return tiji;
}
void vi::get()
{
	cout << "立方体的体积为：" << endl;
	cout << tiji << endl;
}
int main()
{
	vi one,two,three;
	one.post();
	one.ti();
	one.get();
	two.post();
	two.ti();
	two.get();
	three.post();
	three.ti();
	three.get();
}