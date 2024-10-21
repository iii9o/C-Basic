#include <iostream>
using namespace std;
//打印数据函数
void showValue(const int& val) {
	//val = 1000;
	cout << val << endl;
}

int mai3n() {
	// int & ref = 10; 非法操作，引用必须引用合法的内存空间
	const int& ref = 10; //合法操作，相当于 int temp = 10 ; int & ref = temp;
	cout << ref << endl;
	int a = 100;
	showValue(a);
	cout << a << endl;
	return 0;
}