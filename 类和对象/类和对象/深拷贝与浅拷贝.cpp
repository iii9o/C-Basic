//#include <iostream>
//using namespace std;
////�����ǳ��������
//
//class Person {
//public:
//	int age;
//	int* height; //ָ��ָ�����
//	Person() {
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int a , int h) {
//		age = a;
//		height = new int(h);
//		cout << "�вι��캯������" << endl;
//	}
//	Person(const Person& p) {
//		cout << "person�������캯������" << endl;
//		age = p.age;
//		//height = p.height; �������Զ����ɵ�ǳ������ʽ
//		height = new int(*p.height);  //������ǳ����
//	}
//	~Person() {
//		//���������ٵ����ݽ����ͷ�
//		if (height != NULL) {
//			delete height;
//			height = NULL;
//		}
//		cout << "������������" << endl;
//	}
//};
////ǳ���������ڴ��ظ��ͷţ�����������н��
//void test01() {
//	Person p1(18,160);
//	Person p2(p1);
//	cout << "p1������ = " << p1.age <<"  p1�����Ϊ��"<<*p1.height<< endl;
//	cout << "p2������ = "<< p2.age << "  p2�����Ϊ��"<< *p2.height<<endl;
//}
//int main() {
//
//	test01();
//
//	return 0;
//}