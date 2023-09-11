#include <iostream>
#include <string>
using namespace std;

//类对象作为类成员
//class A {
//	public:
//		A(string name) {
//			A_name = name;
//			cout << "A的构造函数" << endl;
//		}
//		string A_name;
//};
//
//class B {
//	public:
//		B(string b_name, string b_a_name):B_name(b_name),B_A(b_a_name)
//		{
//			cout << "B的构造函数" << endl;
//		}
//		string B_name;
//		A B_A;
//};
//类对象作为成员时，先构造成员，再构造自身。先析构自身，再析构成员对象。

//静态成员
/*
静态成员关键字 static
静态成员变量：所有对象共享同一份数据；编译阶段分配内存；类内声明，类外初始化。

静态成员函数：所有对象共享同一个静态成员函数；静态成员函数只能访问静态成员变量。

*/
class car {
	public:
		static int length; // 类内声明
		string name; //静态成员函数是无法访问非静态成员变量的
		static void check() {
			cout << length << endl;
		}
};

int car::length = 5; //类外初始化
//静态成员变量可以通过对象或类名直接访问；静态成员变量同样拥有访问权限限制。

void test() {
	car c1;
	c1.name = "Ford";
	cout << c1.length << endl;
	c1.check();
}

int main() {
	test();
	car::check();
	return 0;
}