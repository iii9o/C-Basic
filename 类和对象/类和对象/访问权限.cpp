#include <iostream>
using namespace std;
//public  ����������Է���
//protected ���ڿ��Է��ʣ����ⲻ�ܷ��� ����ɷ��ʸ���
//private	���ڿ��Է��ʣ����ⲻ�ܷ��� ���಻�ɷ��ʸ���


class my {
public:
	string name;
	void func() {
		name = "����";
		car = "bmw";
		pwd = 123;
	}

protected:
	string car;

private:

	int pwd;


};


int main2() {

	my i;
	//i.name = "fp";
	//i.car = "123";
	//i.pwd = 123;



	return 0;
}