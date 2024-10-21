#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap1(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main12() {
	int a = 5;
	int b = 10;
	swap(&a, &b);
	cout << a << endl;
	system("pause");
	return 0;
}