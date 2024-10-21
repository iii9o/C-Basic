//#include <iostream>
//#include <string>
//using namespace std;
////使用特殊的类或函数访问另一个类中的私有变量
//class Building{
//
//	//全局函数作为友元
//	friend void goodguy(Building& b);
//
//public :
//
//
//	string m_LivingRoom;
//	Building() {
//		m_LivingRoom = "客厅";
//		m_Bedroom = "卧室";
//		
//	}
//private:
//	string m_Bedroom;
//
//};
////全局函数
//void goodguy(Building &b) {
//	cout << "正在访问" << b.m_LivingRoom << endl;
//	cout << "正在访问" << b.m_Bedroom << endl;
//}
//void test01() {
//
//}
//int main() {
//
//	Building b;
//	goodguy(b);
//
//
//
//	return 0;
//}