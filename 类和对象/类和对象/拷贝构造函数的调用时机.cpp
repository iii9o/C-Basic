//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass() {
//		cout << "���캯������" << endl;
//	}
//	MyClass(int a) {
//		age = a;
//		cout << "�вι��캯������" << endl;
//	}
//	MyClass(const MyClass &p) {
//		age = p.age;
//		cout << "�������캯������" << endl;
//	}
//
//	~MyClass() {
//		cout << "������������" << endl;
//	
//	}
//	int age;
//
//
//private:
//
//};
////ʹ��һ���Ѿ�������Ķ�������ʼ��һ���¶���
//void test01() {
//	MyClass p1(10);
//	MyClass p2(p1);
//	cout << "p2������ :" << p2.age << endl;
//
//}
////ֵ���ݵķ�ʽ������������ֵ
//void dowork(MyClass p) {
//
//}
//void test02() {
//	MyClass p;
//	dowork(p); //���ÿ������캯����ͨ��ֵ���ݴ�������
//}
////ֵ��ʽ���ؾֲ�����
//MyClass dowork2() {
//	MyClass p1;
//	cout << &p1 << endl;
//	return p1;
//}
//void test03() {
//	MyClass p;
//	p = dowork2();
//	cout << &p << endl;
//}
//int main() {
//
//	//test01();
//	//test02();
//	//dowork2();
//	test03();
//
//	return 0;	
//}