#include<iostream>
using namespace std;
class Time             // ����Time��
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
private:              // ���ݳ�ԱΪ˽�е�
		int hour;
	int minute;
	int sec;
	
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.post();//���ö���t1�ĳ�Ա����post,��t1�����ݳ�Ա��������
	t1.show();//�����趨��ʱ�� 
	return 0;
}

//#include < iostream>
//using namespace std;
//class Time //����Time��
//{
//public:
//	void set_time(); //���ó�Ա����
//	void show_time(); //���ó�Ա����
//private: //���ݳ�ԱΪ˽��
//	int hour;
//	int minute;
//	int sec;
//};
//int main()
//{
//	Time t1; //�������t1
//	t1.set_time(); //���ö���t1�ĳ�Ա����set_time,��t1�����ݳ�Ա��������
//	t1.show_time(); //���ö���t1�ĳ�Ա����show_time,���t1�����ݳ�Ա��ֵ
//	Time t2;
//	t2.set_time();
//	t2.show_time();
//	return 0;
//}
//void Time::set_time() //�����ⶨ��set_time����
//{
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//}
//void Time::show_time() //�����ⶨ��show_time����
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}