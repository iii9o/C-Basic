//#include <iostream>
//#include <string>
//using namespace std;
////��Ҫv�����麯��
// �����л���Ҫһ��ָ��ָ��v��
// ÿ�ε����麯��ʱ����Ҫ����v����ȷ��ӳ�䵽�ĸ�������
// ��Ӱ��ʹ��
//class Entity{
//public:
//	virtual string getName() {  //�ڻ�����ʹ���麯���Թ���д
//		return  "Entity";
//	}
//};
//class Player : public Entity {
//private:
//	string m_Name;
//public:
//	Player(const string& name)
//		:m_Name(name) {}
//	string getName() override { return m_Name; }; //��������д�麯��,�����е��麯�����ڲ��ᱻ�滻Ϊ�����麯���ĵ�ַ
// //���Ӻ�������д�麯����Ϊ�˸��õĿɶ��Ժͼ�����غ�����ƴд
//
//};
//��̬��̬��ʹ�ã��ø���ָ��������� ִ���������
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