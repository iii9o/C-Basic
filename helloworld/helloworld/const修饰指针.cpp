#include <iostream>
using namespace std;


int main9() {
	int a = 10;
	int b = 10;
	int c = 20;
	const int* p0 = &a; //����ָ�룺��ָ��ָ��ĵ�ַ���Ը��ģ�ָ��ָ���ֵ�����Ը���
	int* const p1 = &b;//ָ�볣����ָ��ĵ�ַ�����Ը��ģ�ָ���ֵ���Ը���
	const int* const p2 = &c;//���������޸�
	p0 = &b;

	cout << &a << endl;
	cout << &b << endl;
	return 0;
}