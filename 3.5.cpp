#include <iostream>
using namespace std;

int eatPeach(int day, int remain) {
    if (day == 1) {
        return remain;
    }
    else {
        return eatPeach(day - 1, (remain + 1) * 2);
    }
}

int main() {
    int total = eatPeach(10, 1);
    cout << "���ӵ�һ��ժ�� " << total << " ������" << endl;
    return 0;
}