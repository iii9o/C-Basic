//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//// 静态成员变量
////所有对象共享同一份数据
////在编译阶段分配内存入全局区
//// 类内声明，类外初始化
////
////静态成员函数，只能访问静态成员变量，所用对象共享同一个函数
//class Person{
//public:
//	static int m_A;
//	static void func() {
//		m_A = 101;
//		m_Private = 2;
//		cout << m_Private << endl;
//		mp();
//		cout << "static 调用" << endl;
//	}
//
//private:
//	static int m_Private;
//	static void mp() {
//		cout << "private static" << endl;//也有访问权限
//	}
//};  
//int Person::m_Private = 100;
//int Person::m_A = 100; // 类外声明	
//
//
//void test01() {
//	Person p;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//	cout << p2.m_A << endl;
//}
//void test02() {
//
//	//通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//	p.func();
//	//通过类名进行访问
//	cout << Person::m_A << endl;
//	Person::func();
//	//cout << Person::m_Private << endl; 类外访问不到私用的静态成员变量
//}
//
//int main() {
//	//test01();
//
//	test02();
//
//
//	return 0;
//}