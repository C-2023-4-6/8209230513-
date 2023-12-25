#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void post()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:              // 数据成员为私有的
		int hour;
	int minute;
	int sec;
	
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.post();//调用对象t1的成员函数post,向t1的数据成员输入数据
	t1.show();//输入设定的时间 
	return 0;
}

//#include < iostream>
//using namespace std;
//class Time //声明Time类
//{
//public:
//	void set_time(); //公用成员函数
//	void show_time(); //公用成员函数
//private: //数据成员为私有
//	int hour;
//	int minute;
//	int sec;
//};
//int main()
//{
//	Time t1; //定义对象t1
//	t1.set_time(); //调用对象t1的成员函数set_time,向t1的数据成员输入数据
//	t1.show_time(); //调用对象t1的成员函数show_time,输出t1的数据成员的值
//	Time t2;
//	t2.set_time();
//	t2.show_time();
//	return 0;
//}
//void Time::set_time() //在类外定义set_time函数
//{
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//}
//void Time::show_time() //在类外定义show_time函数
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}