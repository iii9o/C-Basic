#include <iostream>
using namespace std;
//语法：返回值类型 函数名（形参=默认值）
//注意事项：
//1.如果某个位置已经有了默认值，那么从这个位置向右的所有参数都必须有默认值
//2.如果函数声明有默认参数，那么实现不能有默认参数（不可重定义默认参数）
//函数占位参数，目前阶段没用
int func1(int a, int=10) {
	a = 10;
	return a;
}
int func(int a, int b =20, int c=30) {
	return a + b + c;
}
int mai5n() {
	func1(10,10);
	cout << func(10)<<endl;


	return 0;
}