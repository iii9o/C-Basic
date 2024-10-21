#include <iostream>
using namespace std;

void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (*(arr + j) < *(arr + j + 1)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}
int main18() {
	int arr[] = { 4,3,7,8,6,1,5,2,10,9 };

	bubbleSort(arr,10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}