//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass() {
//		cout << "构造函数调用" << endl;
//	}
//	MyClass(int a) {
//		age = a;
//		cout << "有参构造函数调用" << endl;
//	}
//	MyClass(const MyClass &p) {
//		age = p.age;
//		cout << "拷贝构造函数调用" << endl;
//	}
//
//	~MyClass() {
//		cout << "析构函数调用" << endl;
//	
//	}
//	int age;
//
//
//private:
//
//};
////使用一个已经创建完的对象来初始化一个新对象
//void test01() {
//	MyClass p1(10);
//	MyClass p2(p1);
//	cout << "p2的年龄 :" << p2.age << endl;
//
//}
////值传递的方式给函数参数传值
//void dowork(MyClass p) {
//
//}
//void test02() {
//	MyClass p;
//	dowork(p); //调用拷贝构造函数，通过值传递传递数据
//}
////值方式返回局部对象
//MyClass dowork2() {
//	MyClass p1;
//	cout << &p1 << endl;
//	return p1;
//}
//void test03() {
//	MyClass p;
//	p = dowork2();
//	cout << &p << endl;
//}
//int main() {
//
//	//test01();
//	//test02();
//	//dowork2();
//	test03();
//
//	return 0;	
//}