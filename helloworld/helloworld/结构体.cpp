#include <iostream>
#include<string>
using namespace std;
struct Student  //struct 关键字可以省略
{
	string name;
	int age;
	int score;
}s3;

int main19() {
	struct Student s0;
	s0.name = "zhangsan";
	s0.age = 18;
	s0.score = 32;
	cout << s0.name << endl;
	struct Student s1 = { "asdas",12,32};
	s3.name = "wode";
	cout << s3.name << endl;




	return 0;
}