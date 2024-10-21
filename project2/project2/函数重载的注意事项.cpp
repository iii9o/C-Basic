#include <iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载条件,可使用const进行重载
void func(int& a) {
	cout << "func调用" << endl;
}

void func(const int& a) {
	cout << "funccconst调用" << endl;
}
//函数重载遇到默认参数
void func2(int a, int b) {
	cout << "func2" << endl;
}
void func2(int a,int b =10) {
	cout << "func2" << endl;
}
int main() {
	int a = 10;
	func2(10); //函数重载遇到默认参数会出现二义性
	func(a);
	func(10);
	const int  b = 20;
	func(b);
	return 0;
}