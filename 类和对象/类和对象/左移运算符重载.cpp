//#include <iostream>
//#include <string>
//using namespace std;
////�������������
////cout<<p<<endl;
//class Person{
//friend ostream& operator<<(ostream& cout, Person& p);//�����Ԫ
//public:
//
//	//ͨ����ʹ�ó�Ա�����������������,�޷�ʵ��cout�����
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
//}//���� oprator<<(cout,p) ��Ϊ cout<<p;
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