//#include <iostream>
//using namespace std;
////���û��Զ����вι��캯������c++�����ṩ�޲ι��죬�����ṩ��������
//// ���û��ṩ�������캯������c++�����ṩ�������캯��
////����һ���࣬c++Ĭ���ṩ��������
////1.Ĭ�Ϲ��죻2.����������3.�������죨ֵ������
//class Person {
//public:
//	int age;
//	//Person() {
//	//	cout << "Ĭ�Ϲ���" << endl;
//	//}
//	//Person(int a) {
//	//	age = a;
//	//	cout << "�вι���" << endl;
//	//}
//	Person(const Person& p) {
//		age = p.age;
//		cout << "��������" << endl;
//	}
//	~Person() {
//		cout << "��������" << endl;
//	}
//	void setAce(int s) {
//		ace = s;
//	}
//	int showAce() {
//		return ace;
//	}
//private:
//	int ace;
//
//};
////void test01() {
////	Person p1;
////	p1.setAce(2);
////	p1.age = 18;
////	Person p2(p1);
////
////	cout << "p2������" << p2.age << endl;
////	cout << "p2ace = " << p2.showAce() << endl;
////}
////2.�ṩ�вΣ����������ṩĬ��
////void test02() {
////	Person p1(1);
////	Person p2(p1);
////
////	cout << p2.age << endl;
////
////}
//void test03() {
//
//}
////3.�ṩ���������ṩ����
//int main() {
//
//	//test01();
//	test02();
//	return 0;
//}