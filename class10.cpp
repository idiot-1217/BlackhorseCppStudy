#include <iostream>
using namespace std;

//函数的默认参数
//如果某个参数有默认值，那么之后每个参数都要有默认值
//如果函数的声明有默认值，函数的实现不可以有默认值。
//int add(int a, int b = 10);
//
//int add(int a, int b) {
//	return a + b;
//}
//
//int sum(int a, int b = 10, int c = 20) {
//	return a + b + c;
//}
//
////占位参数，也可以有默认参数
//void func(int a, int = 10) {
//	cout << "占位参数" << endl;
//}
//
//int main() {
//	cout << sum(10) << endl;
//	cout << add(5) << endl;
//	func(10);
//	return 0;
//}

//函数重载
//重载的条件：参数的类型、个数、顺序不同
//函数重载的注意事项：引用作为重载的条件；函数重载碰到函数默认参数。

