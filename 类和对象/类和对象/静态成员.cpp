//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//// ��̬��Ա����
////���ж�����ͬһ������
////�ڱ���׶η����ڴ���ȫ����
//// ���������������ʼ��
////
////��̬��Ա������ֻ�ܷ��ʾ�̬��Ա���������ö�����ͬһ������
//class Person{
//public:
//	static int m_A;
//	static void func() {
//		m_A = 101;
//		m_Private = 2;
//		cout << m_Private << endl;
//		mp();
//		cout << "static ����" << endl;
//	}
//
//private:
//	static int m_Private;
//	static void mp() {
//		cout << "private static" << endl;//Ҳ�з���Ȩ��
//	}
//};  
//int Person::m_Private = 100;
//int Person::m_A = 100; // ��������	
//
//
//void test01() {
//	Person p;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//	cout << p2.m_A << endl;
//}
//void test02() {
//
//	//ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//	p.func();
//	//ͨ���������з���
//	cout << Person::m_A << endl;
//	Person::func();
//	//cout << Person::m_Private << endl; ������ʲ���˽�õľ�̬��Ա����
//}
//
//int main() {
//	//test01();
//
//	test02();
//
//
//	return 0;
//}