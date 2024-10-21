//#include <iostream>
//using namespace std;
////对象的初始化和清理
////1.构造函数进行初始化
////2.析构函数进行清理
//
//class Person {
//public:
////1.1构造函数
////没有返回值不用void
////构造函数名与类名相同，可以有参数，可以发生重载
////创建对象时,构造函数自动调用且调用一次；
//	Person() {
//		cout << "调用构造函数" << endl;
//	}
////析构函数执行清理操作
//	//没有返回值，不写void，不可以有参数，~类名，没有参数，不发生重载
//	//对象销毁前自动调用析构函数，且仅调用一次
//	~Person() {
//		cout << "析构函数调用"<<endl;
//	}
//};
//
//void test01() {
//	Person p1;
//}
//int main6() {
//
//	test01();
//
//	Person p;
//
//	system("pause");
//	return 0;
//}