#include <iostream>
using namespace std;


int main10() {
	int arr[] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << *p << endl;
		p++;
	}
	return 0;
}