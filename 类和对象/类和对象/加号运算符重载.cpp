//#include <iostream>
//#include <string>
////�����������ִ����������
//using namespace std;
//
//class Person{
//public:
//	//ͨ����Ա������������
//	// ���ʣ�
//	// Person p3 = p1.oprator+(p2);
//	//Person operator+ (Person & p) {
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//	
//	//}
//		Person operator+ (int a) {
//		Person temp;
//		temp.m_A = this->m_A + a;
//
//		return temp;
//		
//	}
//	int m_A;
//	int m_B;
//
//
//};
////ͨ��ȫ�ֺ�����������
////���ʣ�
////Person p3 = oprator+(p1,p2);
//Person operator+ (Person& p1, Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////���������Ҳ���Է�����������
//
//
//void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	Person p3 = p1 + p2;
//	cout << p3.m_A << p3.m_B << endl;
//	//�����������
//	Person p4 = p1 + 10;
//	cout << p4.m_A << endl;
//}
//int main() {
//	
//
//	test01();
//
//
//	return 0;
//}