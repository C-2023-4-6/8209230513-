#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
    double side1, side2, side3;
   cout << "�����������ε�����: ";
   cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double area = double_area(side1, side2, side3);
       cout << "The area of the triangle is: " << area << std::endl;
    }
    else {
       cout << "�����ֵ���ܹ���һ��������" << std::endl;
    }

    return 0;
}
