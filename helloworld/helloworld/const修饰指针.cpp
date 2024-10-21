#include <iostream>
using namespace std;


int main9() {
	int a = 10;
	int b = 10;
	int c = 20;
	const int* p0 = &a; //常量指针：：指针指向的地址可以更改，指针指向的值不可以更改
	int* const p1 = &b;//指针常量，指向的地址不可以更改，指向的值可以更改
	const int* const p2 = &c;//都不可以修改
	p0 = &b;

	cout << &a << endl;
	cout << &b << endl;
	return 0;
}