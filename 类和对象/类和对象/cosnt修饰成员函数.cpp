//#include <iostream>
//#include <string>
//using namespace std;
////常函数内不可修改成员变量,成员属性声明mutable后，常函数可以修改
//// 
////常对象只能调用常函数
//// 
//// 常变量不可修改且必须初始化
////
//class Person{
//
//public:
//	int m_Age;
//	mutable int m_b; 
//	void f1() {
//
//	}
//	//this 指针是一个指针常量不可修改，指向调用他的对象,但是指向的内存里的的值是可以修改的
//	//常函数
//	void func() const //此处相当于修饰( const Person * const this;) 
//	{
//		this->m_Age = 100;
//		m_b = 100; //用mutable后，此时可以修改
//	}
//
//};
//
////常对象
//void test01() {
//	const Person p1; //常对象 
//	p1.m_Age = 100; // 不可修改
//	p1.m_b = 100; //可修改
//	//常对象只能调用常函数
//	p1.f1();//不可调用普通函数
//
//}
//int main() {
//
//
//
//
//
//	return 0;
//}