#include <iostream>
using namespace std;

/*
继承方式包括公共继承、保护继承、私有继承。
假定父类包含三种权限内容，公共、保护、私有，有三个子类分别以公共、保护、私有方式继承。
在子类内部，可以访问公共、保护内容，但不能访问私有内容。在子类外部，以公共方式继承的，
只能访问到父类公共内容；以保护方式继承的，除私有外全部变为保护权限，子类外访问不到；以
私有方式继承的，全部变为私有权限，子类外访问不到。

父类中所有非静态成员都会被子类继承

先构造父类，再构造子类，先析构子类，再析构父类

菱形继承 利用虚继承，解决菱形继承数据冗余的问题
*/






//class Base {
//	public:
//		void speak() {
//			cout << "说" << endl;
//		}
//		void listen() {
//			cout << "听" << endl;
//		}
//		void read() {
//			cout << "读" << endl;
//		}
//};
//
//class My: public Base {
//	public:
//		void write() {
//			cout << "写" << endl;
//		}
//};
//
//void test01() {
//	My me;
//	me.listen();
//	me.read();
//	me.speak();
//	me.write();
//}
//
//class Father {
//	public:
//		Father() {
//			m_A = 10;
//		}
//		void func() {
//			cout << "父类函数调用！" << endl;
//		}
//		static void func(int a) {
//			cout << "父类函数重载！" << a << endl;
//		}
//		int m_A;
//};
//
//class Son: public Father {
//	public:
//		Son() {
//			m_A = 30;
//		}
//		void func() {
//			cout << "子类函数调用!" << endl;
//		}
//		int m_A;
//};
//
//void test02() {
//	Son s1;
//	cout << "子类成员属性" << s1.m_A << " " << "父类成员属性" << s1.Father::m_A << endl;
//	s1.func();
//	s1.Father::func();
//	s1.Father::func(10);
//	Son::Father::func(20);
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}

class animal {
	public:
		int m_age;
};

class sheep: virtual public animal {

};

class tuo: virtual public animal {

};

class what: public sheep, public tuo {

};

void test03() {
	what w;
	w.sheep::m_age = 10;
	w.tuo::m_age = 20;
	cout << w.sheep::m_age << endl;
	cout << w.tuo::m_age << endl;
}

int main() {
	test03();
	return 0;
}
