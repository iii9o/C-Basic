#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
void pr(struct Student a) {
	cout << a.age << endl;
}
void prd(struct Student * a) {
	cout << a->age << endl;
}
int main() {
	struct Student arr[3] = {
		{"zhangsan",15,25},
		{"lisi",16,24},
		{"wangwu",18,42}
	};
	arr[1].score = 60;
	pr(arr[1]);
	cout << arr[1].score << endl;
	prd(&arr[1]);
	struct Student* p = &arr[1];
	cout << p->age << endl;




	return 0;
}