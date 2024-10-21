//#include <iostream>
//#include <string>
//using namespace std;
////this指针指向被调用的成员函数所属对象,谁调用this 他就指向谁
////形参与函数变量同名是用this进行区分
////返回对象本身使用 return *this
//class Person{
//public:
//	int age;
//	Person(int age) {
//		this->age = age;
//	}
//	Person& addAge(Person &person) {
//		this->age += person.age;
//		return *this;
//	}
//};
//void test01() {
//	Person p(18);
//	cout << p.age << endl;
//	Person p2(10);
//	p2.addAge(p).addAge(p).addAge(p);
//	cout << p2.age << endl;
//
//
//}
//
//int main() {
//
//
//	test01();
//
//
//	return 0;
//}