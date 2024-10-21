//#include <iostream>
//#include <string>
//using namespace std;
////空指针调用成员函数
//class Person  {
//public:
//	void showPClassName() {
//		cout << "Person class" << endl;
//	}
//	void showPersonClass() {
//		//报错因为传入指针为空
//		if (this == NULL) {
//			return;
//		} //提高鲁棒性
//		cout <<this-> m_Age << endl;
//	}
//	int m_Age;
//
//};
//void test01() {
//	Person* p = NULL;
//	p->showPClassName();
//	p->showPersonClass();
//}
//
//int main() {
//
//	test01();
//
//
//
//	return 0;
//}