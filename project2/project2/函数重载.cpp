#include <iostream>
using namespace std;
//函数重载：1.同一个作用域下；2.函数名相同；3.参数数据类型不同或顺序不同；
//返回值不可以作为函数重载的条件

void func() {
	cout << "funct" << endl;
}

void func(int a) {
	cout << "funct(int a)" <<endl;
}
//在 C++ 中，如果不指定浮点数类型，编译器会将带小数点的数字视为 double 类型。例如：
void func(double a) {
	cout << "double" << endl;
}
void func(float a) {
	cout << "float" << endl;
}
void func(double a,int b) {
	cout << "double" << endl;
}

int main6() {

	func(3.1f);

	return 0;
}