#include	 <iostream>
using namespace std;

//引用做函数返回值
//不返回局部变量的引用
int& test1() {
	int a=10;
	return a;
}
//调用可以作为左值
int& test2() {
	static int a = 20;
	return a;
}
int main1() {
	int& ref = test1();
;
cout << ref << endl;
int& ref2 = test2();
	cout << ref2 << endl;
	test2() = 1000;
	cout << ref2 << endl;
	return 0;
}