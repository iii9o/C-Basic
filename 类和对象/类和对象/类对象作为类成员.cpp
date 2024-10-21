//#include<iostream>
//#include <string>
//using namespace std;
//
//class Phone {
//public:
//	Phone(string n) {
//		name = n;
//		cout << "Phone构造" << endl;
//	}
//	string name;
//};
//
//class Person {
//public:
//	Person(string n, string p):name(n),phone(p) {
//		cout << "Person 构造" << endl;;
//	}
//	string name;
//	Phone phone;
//};
//
////当其他类 对象作为本类成员，先创建成员类在创建本类
////释放时先进后出
//
//void test01() {
//	Person p("张三","苹果手机");
//	cout << p.name<<"的手机是 " << p.phone.name << endl;
//}
//
//int main() {
//
//	test01();
//
//	return 0;
//}
//
