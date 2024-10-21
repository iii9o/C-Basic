#include <iostream>
#include <string>
using namespace std;

class Student {
	//类中的属性和行为统称为成员
	//属性：：成员属性，成员变量
	//行为：：成员函数，成员方法
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