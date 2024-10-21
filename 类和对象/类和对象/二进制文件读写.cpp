//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//class Person{
//public:
//	char m_Name[64];
//	int m_Age;
//};
////void test01() {
////	ofstream ofs;
////	ofs.open("Person.txt", ios::out | ios::binary);
////	Person p = { "zhangsan",18 };
////	ofs.write((const char*)&p, sizeof(Person));
////	ofs.close();
////}
//void test02() {
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//	cout << p.m_Age << p.m_Name << endl;
//	ifs.close();
//}
//
//int main() {
//
//
//	test02();
//
//
//	return 0;
//}