#include <iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ��������,��ʹ��const��������
void func(int& a) {
	cout << "func����" << endl;
}

void func(const int& a) {
	cout << "funccconst����" << endl;
}
//������������Ĭ�ϲ���
void func2(int a, int b) {
	cout << "func2" << endl;
}
void func2(int a,int b =10) {
	cout << "func2" << endl;
}
int main() {
	int a = 10;
	func2(10); //������������Ĭ�ϲ�������ֶ�����
	func(a);
	func(10);
	const int  b = 20;
	func(b);
	return 0;
}