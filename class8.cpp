#include <iostream>
using namespace std;

int main() {
	// C++内存模型：代码区、全局区、栈区、堆区
	// 1. 代码区：存放函数体的二进制代码，由操作系统进行管理
	// 2. 全局区：存放全局变量、静态变量与常量
	// 3. 栈区：由编译器自动分配释放，存放函数的参数值、局部变量等
	// 4. 堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
	//
	// ***在程序编译后，生成了可执行程序exe，未执行程序前分为两个区域：代码区和全局区
	// 代码区CPU执行的机器指令，共享(对于需要频繁执行的程序，代码区只需要存一份)且只读(防止程序
	// 意外修改指令)。
	// 全局区包含了变量与常量，该区域的数据在程序结束后由操作系统释放。
	// 全局区有：全局变量、静态变量 static关键字、字符串常量、const修饰的全局变量（全局常量）
	//
	// ***程序运行后，不要返回局部变量的地址【编译器为防止误操作会保留一次，第二次即乱码】
	// 利用new在堆区开辟新内存 int * p = new int(10)
	// 将堆区数据内存释放 delete p
	// 利用new在堆区建一个数组 int *arr = new int[10];
	// 释放 delete[] arr;
	system("pause");
	return 0;
}