//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
////void test01() {  //д�ļ�
////	ofstream ofs;
////	ofs.open("test.txt", ios::out);
////	ofs << "188" << endl;
////	ofs.close();
////}
//void test02() { //���ļ�
//	ifstream isf;
//	isf.open("test.txt", ios::in);
//	if (!isf.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//������
//	char buf[1024] = { 0 };
//	//��һ��
//	//while (isf >> buf) {
//	//	cout << buf << endl;
//	//}
//	//�ڶ���
//	while(isf.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}
//	isf.close();
//}
//int main() {
//
//
//	test02();
//
//
//	return 0;
//}