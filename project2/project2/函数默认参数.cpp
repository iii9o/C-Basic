#include <iostream>
using namespace std;
//�﷨������ֵ���� ���������β�=Ĭ��ֵ��
//ע�����
//1.���ĳ��λ���Ѿ�����Ĭ��ֵ����ô�����λ�����ҵ����в�����������Ĭ��ֵ
//2.�������������Ĭ�ϲ�������ôʵ�ֲ�����Ĭ�ϲ����������ض���Ĭ�ϲ�����
//����ռλ������Ŀǰ�׶�û��
int func1(int a, int=10) {
	a = 10;
	return a;
}
int func(int a, int b =20, int c=30) {
	return a + b + c;
}
int mai5n() {
	func1(10,10);
	cout << func(10)<<endl;


	return 0;
}