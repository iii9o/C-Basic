#include <iostream>
#include <string>
using namespace std;

class Student {
	//���е����Ժ���Ϊͳ��Ϊ��Ա
	//���ԣ�����Ա���ԣ���Ա����
	//��Ϊ������Ա��������Ա����
public:
	string m_Name;
	int id;

	void show() {
		cout << m_Name << endl;
		cout << id << endl;
	}
	void setName(string name) {
		m_Name = name;

	}
};

	
int main1() {
	Student st;
	st.m_Name = "pb";
	st.id = 12;

	st.show();

	st.setName("lisi");
	st.show();


	return 0;
}