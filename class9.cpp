//《引用》
//引用：给变量起别名
//语法：数据类型 &别名=原名；

//***指针与引用的关系：
//指针指向变量的地址，引用和原变量共用同一块内存；
//指针可以有多级，引用只能有一级。
//在定义时，指针可以不初始化，引用必须要初始化，明确是谁的别名。
//指针可以指向空，空指针、野指针。引用不可以指向空。因此，作为函数参数时，指针需要判断是否为空。
//指针初始化之后可以改变，引用不可修改。int &b = a; b = c;这是将c的值赋给b而不是更改引用。
//sizeof结果不同，在64位机器上，int *占用8字节，int 占用4字节。
//++的含义不同，指针操纵内存后移，引用操纵变量值加1。

#include <iostream>
using namespace std;

//int main() {
//	int a = 10;
//	int &b = a;
//	cout << b << a << endl;
//	b = 9;
//	cout << b << a << endl;
//	a = 8;
//	cout << b << a << endl;
//	return 0;
//}

//引用作为函数参数，简化指针
//void swap1(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swap2(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap3(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//	cout << a << " " << b << endl;
//	swap2(&a, &b);
//	cout << a << " " << b << endl;
//	swap3(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}

//引用作为函数的返回值；1.不要返回局部变量的引用；2.函数的调用可以作为左值。
//int &test() {
//	int a = 10;
//	return a;
//}
//
//int &test1() {
//	static int a = 10; //静态变量，全局区
//	return a;
//}
//
//int main() {
//	int &ref = test1();
//	int &res = test();
//	test1() = 100;
//	cout << "测试1：" << ref << endl;
////	cout << "测试2：" << res << endl;
//}

// 引用的本质是指针常量
// 常量引用，修饰形参，防止误操作。
void show(const int &a) {
	cout << a << endl;
}

int main() {
	int a = 10;
	show(a);
	return 0;
}