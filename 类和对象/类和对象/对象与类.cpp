#include <iostream>
using namespace std;
#define PI 3.14
class Circle {
	//����Ȩ��
public:
	//����
	int m_R;
	// ��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC() {
		return 2 + PI * m_R;
	}
};

int main0() {
	//ʵ��������
	Circle cl;
	cl.m_R = 5;

	cout << cl.calculateZC() << endl;




	return 0;
}