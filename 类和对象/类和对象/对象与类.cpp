#include <iostream>
using namespace std;
#define PI 3.14
class Circle {
	//公共权限
public:
	//属性
	int m_R;
	// 行为
	//获取圆的周长
	double calculateZC() {
		return 2 + PI * m_R;
	}
};

int main0() {
	//实例化对象
	Circle cl;
	cl.m_R = 5;

	cout << cl.calculateZC() << endl;




	return 0;
}