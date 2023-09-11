#include <iostream>
using namespace std;

/*
多态: 静态多态和动态多态
静态多态：函数重载、运算符重载
动态多态：派生类和虚函数运行时多态

静态多态的函数地址早绑定：编译时确定函数地址；
动态多态的函数地址晚绑定：运行时确定函数地址。

动态多态的满足条件：
1. 有继承关系
2. 子类重写父类的虚函数

动态多态的使用：父类的指针或引用 指向 子类对象


虚函数（表）指针：指向虚函数表，表内记录虚函数的地址。当子类重写父类虚函数时，子类虚函数指针
指向的虚函数表覆盖了父类的虚函数表。

纯虚函数与抽象类：virtual 返回值类型 函数名 (参数列表) = 0; 当类中有了纯虚函数，这个类也成为
抽象类。抽象类无法实例化对象，子类必须重写抽象类中的纯虚函数，否则也属于抽象类。
*/

class BaseOperator {
	public:
		virtual int getResult() {
			return 0;
		}
		int m_a;
		int m_b;
};

class Add: public BaseOperator {
	public:
		int getResult() {
			return m_a + m_b;
		}
};

class Sub: public BaseOperator {
	public:
		int getResult() {
			return m_a - m_b;
		}
};

void test01() {
	//父类指针指向子类对象，实现多态
	BaseOperator *p = new Add;
	p->m_a = 10;
	p->m_b = 20;
	cout << p->getResult() << endl;
	delete p; //new对象开辟在堆区数据，开辟完手动释放
	p = new Sub;
	p->m_a = 20;
	p->m_b = 40;
	cout << p->getResult() << endl;
}


class Base {
	public:
		virtual void func() = 0;
};

class Car: public Base {
	public:
		void func() {
			cout << "重写成功！" << endl;
		}
};

void test02() {
	Base *q = new Car;
	q->func();
}


int main() {
	test02();
	system("pause");
	return 0;
}