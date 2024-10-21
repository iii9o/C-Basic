//#include <iostream>
//#include <string>
//using namespace std;
////在c++中,成员变量和成员函数分开存储
////只有非静态成员变量才属于类的对象；
//class Person{
//
//public :
//	int a;
//	static int b;
//	void c() {
//
//	};
//};
//
//int Person::b = 10;
//void test1() {
//	Person p; //空对象占用的内存空间为1，用于区分空对象占用内存的位置
//	//每个空对象都有独一无二的内存；
//	cout << "空对象占用的内存空间 = " << sizeof(p) << endl;
//}
//void test2() {
//	Person p1;
//	cout << "空间 = " << sizeof(p1) << endl;
//}	
//int main() {
//	test2();
//
//
//
//
//	return 0;
//}