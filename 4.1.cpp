#include <iostream>
using namespace std;

int main() {
    int input[10];
    int unique[10];
    int count = 0;

    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 10; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) 
        {
            if (input[i] == input[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            unique[count] = input[i];
            count++;
        }
    }

    cout << "不同的数有：" << endl;
    for (int i = 0; i < count; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}