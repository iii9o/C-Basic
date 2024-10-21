#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};

int mai21n() {
	struct Student arr[3] = {
		{"zhangsan",15,25},
		{"lisi",16,24},
		{"wangwu",18,42}
	};
	arr[1].score = 60;

	cout << arr[1].score << endl;

	struct Student *p= &arr[1];
	cout << p->age << endl;




	return 0;
}