#include	 <iostream>
using namespace std;

//��������������ֵ
//�����ؾֲ�����������
int& test1() {
	int a=10;
	return a;
}
//���ÿ�����Ϊ��ֵ
int& test2() {
	static int a = 20;
	return a;
}
int main1() {
	int& ref = test1();
;
cout << ref << endl;
int& ref2 = test2();
	cout << ref2 << endl;
	test2() = 1000;
	cout << ref2 << endl;
	return 0;
}