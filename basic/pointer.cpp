#include<iostream>
using namespace std;


int main() {
    int student[2];
    int teacher[] = {1, 2, 3, 4, 5};

    student[0] = 1;
    student[1] = 2;
    student[2] = 3;
    student[3] = 4;

    cout << sizeof(&student);
    cout << sizeof(&teacher);

    return 0;
}