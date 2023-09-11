#include <iostream>
using namespace std;

int add(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

//值传递时，形参的改变不会影响实参。值传递时形参会在内存开辟临时空间复制实参的值。
//声明可以有多次，定义只能有一次；声明int function_name(int a, int b);
//函数分文件编写：在.h后缀的头文件中写函数的声明；在.cpp后缀的源文件中写函数的定义。调用时需要
//#include "name.h"
int main() {
	int i = 1;
	int j = 2;
	cout << "输出为：" << add(i, j) << endl;
	system("pause");
	return 0;
}