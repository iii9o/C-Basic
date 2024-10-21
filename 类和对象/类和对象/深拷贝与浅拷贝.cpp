//#include <iostream>
//using namespace std;
////深拷贝与浅拷贝问题
//
//class Person {
//public:
//	int age;
//	int* height; //指针指向身高
//	Person() {
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int a , int h) {
//		age = a;
//		height = new int(h);
//		cout << "有参构造函数调用" << endl;
//	}
//	Person(const Person& p) {
//		cout << "person拷贝构造函数调用" << endl;
//		age = p.age;
//		//height = p.height; 编译器自动生成的浅拷贝格式
//		height = new int(*p.height);  //深拷贝解决浅拷贝
//	}
//	~Person() {
//		//将堆区开辟的数据进行释放
//		if (height != NULL) {
//			delete height;
//			height = NULL;
//		}
//		cout << "析构函数调用" << endl;
//	}
//};
////浅拷贝导致内存重复释放，利用深拷贝进行解决
//void test01() {
//	Person p1(18,160);
//	Person p2(p1);
//	cout << "p1的年龄 = " << p1.age <<"  p1的身高为："<<*p1.height<< endl;
//	cout << "p2的年龄 = "<< p2.age << "  p2的身高为："<< *p2.height<<endl;
//}
//int main() {
//
//	test01();
//
//	return 0;
//}