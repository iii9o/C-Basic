#include <iostream>
using namespace std;
//��ӡ���ݺ���
void showValue(const int& val) {
	//val = 1000;
	cout << val << endl;
}

int mai3n() {
	// int & ref = 10; �Ƿ����������ñ������úϷ����ڴ�ռ�
	const int& ref = 10; //�Ϸ��������൱�� int temp = 10 ; int & ref = temp;
	cout << ref << endl;
	int a = 100;
	showValue(a);
	cout << a << endl;
	return 0;
}