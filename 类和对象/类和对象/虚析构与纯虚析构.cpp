//#include <iostream>
//#include <string>
//using namespace std;
////�������ʹ�������
//
//class Animal{
//public:
//	virtual void speak() = 0;
//	Animal() {
//		cout << "Animal ����" << endl;
//
//	}
//	//virtual ~Animal() {
//	//	cout << "Animal ����" << endl;
//	//}
//	virtual ~Animal() = 0;//��������,�д����������಻��ʵ����������Ϊ������
//
//};
//
//class Cat : public Animal {
//public:
//	Cat(string name) {
//		cout << "cat����" << endl;
//		m_Name = new string(name);
//	}
//	void speak() {
//		cout <<*m_Name<<"Сè" << endl;
//	}
//	string* m_Name;
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "cat����" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//Animal::~Animal() {
//	cout << "��������" << endl;
//}
//void test01() {
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;//�����������������������
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}