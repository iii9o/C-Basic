#include <iostream>
using namespace std;

int asda(int a, int b);

int main2(){
	
	int a = 5;
	int b = 6;

	cout << asda(a, b) << endl;

	system("pause");

	return 0;
}

int asda(int a, int b) {
	return(a > b ? a : b);
}
