//#include <iostream>
//using namespace std;
////���캯���ķ����Լ�����
////��������Ϊ�вι�����޲ι���
////�����ͷ�Ϊ��ͨ����Ϳ�������
//class Person{
//public:
//	int age;
//	Person() {
//		cout << "Person�޲Σ�Ĭ�ϣ����캯������" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person�вι��캯������" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person��������" << endl;
//	}
//	~Person() {
//		cout << "Person������������" << endl;
//	}
//};
////����
////���ŷ�
////��ʾ��
////��ʽת����
//void test01() {
//	////1.���ŷ�
//	////����Ĭ�Ϲ��첻������,����������Ϊ����һ������������
//	//Person p();
//	//Person p1;
//	//Person p2(10);
//	//Person p3(p2);
//	//cout << p2.age << endl;
//	//cout << p3.age << endl;
//
//	//��ʾ��
//	//Person(10); //�������� �ص㣺��ǰ��ִ�к�ϵͳ��ֱ�ӻ���
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	//Person(p3);//�������ÿ������촴����������,��������ΪPerson(p3) = Person p3
//
//	//��ʽת����
//	Person p = 10;// ==Person p4 = Person(10);
//	Person p1 = p;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}