#include <iostream>
using namespace std;





int main2(){
	int a = 10;
	int& ref = a; //int * const ref = &a;

	ref = 20; // *ref = 20;
	cout << a << endl;
	cout << ref << endl;



	return 0;
}