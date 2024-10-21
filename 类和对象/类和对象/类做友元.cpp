//#include <iostream>
//#include <string>
//using namespace std;
//class Building{
//	friend class GoodGuy;
//public:
//	Building();
//	string m_Settingroom;
//
//private:
//	string m_Bedroom;
//
//
//};
////类外写成员函数
//Building::Building() {
//	m_Settingroom = "客厅";
//	m_Bedroom = "卧室";
//}
//
//class GoodGuy {
//public:
//	GoodGuy();
//	void visit();
//	Building* building;
//};
//GoodGuy::GoodGuy() {
//	building = new Building;
//
//}
//void GoodGuy::visit() {
//	cout << "好基友正在访问" << building->m_Settingroom << endl;
//	cout << "好基友正在访问" <<building->m_Bedroom<< endl;
//}
//void test01() {
//	GoodGuy g;
//	g.visit();
//}
//int main() {
//
//	test01();
//
//
//
//	return 0;
//}