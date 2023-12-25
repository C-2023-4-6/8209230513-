#include<iostream>
using namespace std;
class student {
private:
	int id, score;
public:
	student(int ID, int SCORE) {
		id = ID;
		score = SCORE;
	}
	void max(student* p) {
		int max = 0;
		student* x = NULL;
		for (int i = 0; i < 5; i++) {
			if ((p + i)->score > max) {
				max = (p + i)->score;
				x = p + i;
			}
		}
		cout << "最高成绩者学号为" << x->id << endl;
	}
};
int main() {
	student stu[5] = { student(1,96),
		student(2,89),
		student(3,99),
		student(4,47),
		student(5,39) };
	student* p = stu;
	stu->max(p);
	return 0;
}


