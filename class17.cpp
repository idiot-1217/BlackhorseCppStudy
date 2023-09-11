#include <iostream>
#include <string>
using namespace std;

/*************************************************************************
《运算符重载》

/*
4.5.1 加号：-> 实现两个自定义数据类型相加
成员函数or全局函数：operator+
*/
//class Person {
//	public:
//		int m_A;
//		int m_B;
//		Person operator+(Person &p) {
//			Person tmp;
//			tmp.m_A = this->m_A + p.m_A;
//			tmp.m_B = this->m_B + p.m_B;
//			return tmp;
//		} //本质为 p1.operator+(p2)；运算符重载，同样可以发生函数重载
//};

//或者写成全局函数
//Person operator+(Person &p1, Person &p2) {
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_A;
//	tmp.m_B = p1.m_B + p2.m_B;
//	return tmp;
//}

//void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 7;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 7;
//	Person p3 = p1 + p2;
//	cout << p3.m_A << p3.m_B << endl;
//}

/*
4.5.2 左移
可以输出自定义数据类型
*/


//class milk {
//	public:
//		int m_A;
//		int m_B;
//		// 左移运算符无法使用成员函数的方式实现重载，因为会导致cout居右
//};
//
//ostream &operator<<(ostream &cout, milk &p) {
//	cout << "p.m_A = " << p.m_A << " " << "p.m_B = " << p.m_B;
//	return cout;
//}
//
//void test02() {
//	milk p1;
//	p1.m_A = 5;
//	p1.m_B = 10;
//	cout << p1 << endl;
//}

/*
4.5.3 递增
实现自己的整型数据
*/
//class Interger {
//		friend ostream &operator<<(ostream &cout, Interger &p);
//	public:
//		int m_A = 10;
//		// 重载前置++
//		Interger &operator++() {
//			m_A ++;
//			return *this;
//		}
//		// 重载后置++
//		Interger operator++(int) {
//			Interger tmp = *this;
//			m_A ++;
//			return tmp;
//		} //返回值，返回局部引用对象已经释放，非法操作。
//};

//前置
//ostream &operator<<(ostream &cout, Interger & p) {
//	cout << "属性m_A:" << p.m_A << endl;
//	return cout;
//}
//后置
//ostream &operator<<(ostream &cout, Interger p) {
//	cout << "属性m_A:" << p.m_A << endl;
//	return cout;
//}


//void test03() {
//	Interger p;
//	cout << p << endl;
//	cout << ++p << endl;
//}

//void test04() {
//	Interger p1;
//	cout << p1++;
//}

/*
4.5.4 赋值
赋值运算符operator=，对属性值进行拷贝
如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝
*/
//class Person {
//	public:
//		Person (int age) {
//			m_Age = new int(age);
//		}
//		int *m_Age;
//		~Person () {
//			if (m_Age != NULL) {
//				delete m_Age;
//				m_Age = NULL;
//			}
//		}
//
//		Person &operator=(Person &p) {
//			//先判断是否有数据在堆区，有则释放
//			if (m_Age != NULL) {
//				delete m_Age;
//				m_Age = NULL;
//			}
//			//深拷贝，在堆区开辟新的数据，避免析构问题
//			m_Age = new int(*p.m_Age);
//			return *this;
//		}
//};

//void test05() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(22);
//	p3 = p2 = p1;
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}

/*
4.5.5 关系
关系运算符重载，可以让两个自定义类型的对象进行对比操作。
*/
//class Person {
//	public:
//		Person(string name, int age) {
//			m_Name = name;
//			m_Age = age;
//		}
//		string m_Name;
//		int m_Age;
//		bool operator==(Person &p) {
//			return (m_Name == p.m_Name && m_Age == p.m_Age);
//		}
//};

//void test06() {
//	Person p1("Jack", 18);
//	Person p2("Jack", 20);
//	if (p1 == p2) {
//		cout << "相同" << endl;
//	} else {
//		cout << "不相同" << endl;
//	}
//}

/*
4.5.6 函数调用
()发生重载，称为仿函数
*/
class Add {
	public:
		int a;
		int b;
		int operator()(int a, int b) {
			return a + b;
		}
};
/*************************************************************************/

void test07() {
	Add add;
	cout << add(10, 10) << endl;
	//匿名函数对象
	cout << Add()(200, 200) << endl;
}


int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	system("pause");
	return 0;
}