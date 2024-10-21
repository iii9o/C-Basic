//#include <iostream>
//using namespace std;
////构造函数的分类以及调用
////按参数分为有参构造和无参构造
////按类型分为普通构造和拷贝构造
//class Person{
//public:
//	int age;
//	Person() {
//		cout << "Person无参（默认）构造函数调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person拷贝构造" << endl;
//	}
//	~Person() {
//		cout << "Person析构函数调用" << endl;
//	}
//};
////调用
////括号法
////显示法
////隐式转换法
//void test01() {
//	////1.括号法
//	////调用默认构造不加括号,编译器会认为他是一个函数声明；
//	//Person p();
//	//Person p1;
//	//Person p2(10);
//	//Person p3(p2);
//	//cout << p2.age << endl;
//	//cout << p3.age << endl;
//
//	//显示法
//	//Person(10); //匿名对象 特点：当前行执行后系统会直接回收
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	//Person(p3);//不能利用拷贝构造创建匿名对象,编译器认为Person(p3) = Person p3
//
//	//隐式转换法
//	Person p = 10;// ==Person p4 = Person(10);
//	Person p1 = p;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}