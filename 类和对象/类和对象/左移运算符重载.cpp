//#include <iostream>
//#include <string>
//using namespace std;
////左移运算符重载
////cout<<p<<endl;
//class Person{
//friend ostream& operator<<(ostream& cout, Person& p);//添加友元
//public:
//
//	//通常不使用成员函数重载左移运算符,无法实现cout在左侧
//	//int operator<<() {
//
//	//}
//	int m_A;
//	int m_B;
//
//private:
//	int m_private;
//};
//
//ostream& operator<<(ostream& cout, Person& p) {
//	cout << "m_A=" << p.m_A << endl;
//	cout << "m_B =" << p.m_B << endl;
//	cout << "m_private" << p.m_private << endl;
//	return cout;
//
//}//本质 oprator<<(cout,p) 简化为 cout<<p;
//
//
//void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	cout << p1 << endl;
//}
//
//int main() {
//
//
//	test01();
//
//	return 0;
//}