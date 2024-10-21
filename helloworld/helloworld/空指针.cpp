#include <iostream>
using namespace std;
// 空指针->指向0的内存位置，没有访问权力，可用于定义
//0-255 内存由系统占用，不可访问

int mai7n() {
	int* p = NULL;
	cout << p << endl;
	return 0;
}