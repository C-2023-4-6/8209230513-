#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
    double side1, side2, side3;
   cout << "请输入三角形的三边: ";
   cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double area = double_area(side1, side2, side3);
       cout << "The area of the triangle is: " << area << std::endl;
    }
    else {
       cout << "输入的值不能构成一个三角形" << std::endl;
    }

    return 0;
}
