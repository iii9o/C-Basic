#include <iostream>
using namespace std;
//�������أ�1.ͬһ���������£�2.��������ͬ��3.�����������Ͳ�ͬ��˳��ͬ��
//����ֵ��������Ϊ�������ص�����

void func() {
	cout << "funct" << endl;
}

void func(int a) {
	cout << "funct(int a)" <<endl;
}
//�� C++ �У������ָ�����������ͣ��������Ὣ��С�����������Ϊ double ���͡����磺
void func(double a) {
	cout << "double" << endl;
}
void func(float a) {
	cout << "float" << endl;
}
void func(double a,int b) {
	cout << "double" << endl;
}

int main6() {

	func(3.1f);

	return 0;
}