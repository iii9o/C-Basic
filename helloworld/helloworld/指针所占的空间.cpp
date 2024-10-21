#include <iostream>
using namespace std;


int main6() {
	int a = 10;
	int* p = &a;
	cout << sizeof(a) << endl;
	cout << sizeof(*p) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	return 0;
}