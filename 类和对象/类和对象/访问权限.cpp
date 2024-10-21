#include <iostream>
using namespace std;
//public  类内类外可以访问
//protected 类内可以访问，类外不能访问 子类可访问父类
//private	类内可以访问，类外不能访问 子类不可访问父类


class my {
public:
	string name;
	void func() {
		name = "张三";
		car = "bmw";
		pwd = 123;
	}

protected:
	string car;

private:

	int pwd;


};


int main2() {

	my i;
	//i.name = "fp";
	//i.car = "123";
	//i.pwd = 123;



	return 0;
}