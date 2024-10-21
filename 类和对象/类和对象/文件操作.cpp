//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
////void test01() {  //写文件
////	ofstream ofs;
////	ofs.open("test.txt", ios::out);
////	ofs << "188" << endl;
////	ofs.close();
////}
//void test02() { //读文件
//	ifstream isf;
//	isf.open("test.txt", ios::in);
//	if (!isf.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//读数据
//	char buf[1024] = { 0 };
//	//第一种
//	//while (isf >> buf) {
//	//	cout << buf << endl;
//	//}
//	//第二种
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