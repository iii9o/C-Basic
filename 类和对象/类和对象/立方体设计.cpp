#include <iostream>
using namespace std;

class Cube{
public:
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	int caculateS() {
		return 2 * (m_L * m_W);
	}
	int caculateV() {
		return m_L * m_H * m_W;
	}
private:
	int m_L;
	int m_W;
	int m_H;

};

//È«¾Öº¯ÊıÅĞ¶Ï
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getH() == c2.getH() || c1.getL() == c2.getL() || c1.getW() == c2.getW())
	{
		return true;
	}
	else return false;
}

int main4() {
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);

	cout << c1.caculateS() << endl;
	cout << c1.caculateV() << endl;
	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);


	return 0;
}