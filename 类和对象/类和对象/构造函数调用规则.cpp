//#include <iostream>
//using namespace std;
////若用户自定义有参构造函数，则c++不再提供无参构造，但会提供拷贝构造
//// 若用户提供拷贝构造函数，则c++不再提供其他构造函数
////创建一个类，c++默认提供三个函数
////1.默认构造；2.析构函数；3.拷贝构造（值拷贝）
//class Person {
//public:
//	int age;
//	//Person() {
//	//	cout << "默认构造" << endl;
//	//}
//	//Person(int a) {
//	//	age = a;
//	//	cout << "有参构造" << endl;
//	//}
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造" << endl;
//	}
//	~Person() {
//		cout << "析构函数" << endl;
//	}
//	void setAce(int s) {
//		ace = s;
//	}
//	int showAce() {
//		return ace;
//	}
//private:
//	int ace;
//
//};
////void test01() {
////	Person p1;
////	p1.setAce(2);
////	p1.age = 18;
////	Person p2(p1);
////
////	cout << "p2的年龄" << p2.age << endl;
////	cout << "p2ace = " << p2.showAce() << endl;
////}
////2.提供有参，编译器不提供默认
////void test02() {
////	Person p1(1);
////	Person p2(p1);
////
////	cout << p2.age << endl;
////
////}
//void test03() {
//
//}
////3.提供拷贝，不提供其他
//int main() {
//
//	//test01();
//	test02();
//	return 0;
//}