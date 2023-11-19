#include<iostream>
using namespace std;
int main()
{
	char s;
	cin >> s;
	if (s > 90) {
		cout << (char)(s - 32) << endl;
	}
	else
	{
		cout << s + 1 << endl;
	}
}