#include <iostream>
using namespace std;


int main5() {

	int a = 10;

	int* p = &a;
	cout << &a << endl;
	cout << p << endl;
	cout << *p << endl;//*p 对p进行解引用；

	return 0;
}