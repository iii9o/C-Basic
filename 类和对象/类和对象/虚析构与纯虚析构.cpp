//#include <iostream>
//#include <string>
//using namespace std;
////虚析构和纯虚析构
//
//class Animal{
//public:
//	virtual void speak() = 0;
//	Animal() {
//		cout << "Animal 构造" << endl;
//
//	}
//	//virtual ~Animal() {
//	//	cout << "Animal 析构" << endl;
//	//}
//	virtual ~Animal() = 0;//纯虚析构,有纯虚析构的类不能实例化对象，视为抽象类
//
//};
//
//class Cat : public Animal {
//public:
//	Cat(string name) {
//		cout << "cat构造" << endl;
//		m_Name = new string(name);
//	}
//	void speak() {
//		cout <<*m_Name<<"小猫" << endl;
//	}
//	string* m_Name;
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "cat析构" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//Animal::~Animal() {
//	cout << "纯虚析构" << endl;
//}
//void test01() {
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;//父类析构不会调用子类析构
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}