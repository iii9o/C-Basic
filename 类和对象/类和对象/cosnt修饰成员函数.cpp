//#include <iostream>
//#include <string>
//using namespace std;
////�������ڲ����޸ĳ�Ա����,��Ա��������mutable�󣬳����������޸�
//// 
////������ֻ�ܵ��ó�����
//// 
//// �����������޸��ұ����ʼ��
////
//class Person{
//
//public:
//	int m_Age;
//	mutable int m_b; 
//	void f1() {
//
//	}
//	//this ָ����һ��ָ�볣�������޸ģ�ָ��������Ķ���,����ָ����ڴ���ĵ�ֵ�ǿ����޸ĵ�
//	//������
//	void func() const //�˴��൱������( const Person * const this;) 
//	{
//		this->m_Age = 100;
//		m_b = 100; //��mutable�󣬴�ʱ�����޸�
//	}
//
//};
//
////������
//void test01() {
//	const Person p1; //������ 
//	p1.m_Age = 100; // �����޸�
//	p1.m_b = 100; //���޸�
//	//������ֻ�ܵ��ó�����
//	p1.f1();//���ɵ�����ͨ����
//
//}
//int main() {
//
//
//
//
//
//	return 0;
//}