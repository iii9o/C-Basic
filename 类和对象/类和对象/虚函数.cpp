//#include <iostream>
//#include <string>
//using namespace std;
////需要v表储存虚函数
// 基类中还需要一个指针指向v表
// 每次调用虚函数时，需要遍历v表来确定映射到哪个函数上
// 不影响使用
//class Entity{
//public:
//	virtual string getName() {  //在基类中使用虚函数以供重写
//		return  "Entity";
//	}
//};
//class Player : public Entity {
//private:
//	string m_Name;
//public:
//	Player(const string& name)
//		:m_Name(name) {}
//	string getName() override { return m_Name; }; //当子类重写虚函数,子类中的虚函数表内部会被替换为子类虚函数的地址
// //在子函数中重写虚函数，为了更好的可读性和检查重载函数的拼写
//
//};
//动态多态的使用，用父类指针或者引用 执行子类对象
//int main() {
//
//	Entity* e = new Entity();
//	cout << e->getName() << endl;
//	Player* p = new Player("pb");
//	cout << p->getName() << endl;
//	
//	Entity* Ent = p;
//	cout << Ent->getName() << endl;
//
//
//	return 0;
//}