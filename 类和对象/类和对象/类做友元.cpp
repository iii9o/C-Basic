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
////����д��Ա����
//Building::Building() {
//	m_Settingroom = "����";
//	m_Bedroom = "����";
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
//	cout << "�û������ڷ���" << building->m_Settingroom << endl;
//	cout << "�û������ڷ���" <<building->m_Bedroom<< endl;
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