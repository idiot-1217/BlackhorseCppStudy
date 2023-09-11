#include <iostream>
#include <string>
using namespace std;
//C++对象模型 this指针
/*4.3.1 成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上。函数也不占对象空间，
所有函数共享一个函数实例。

this指针指向被调用的成员函数所属的对象，无需定义，直接使用。
使用情况：
（1）当形参与成员变量重名时，可以使用；
（2）在类的非静态成员函数中返回对象本身，可以return *this
*/

class Person {
	public:
		Person(int age) {
			this -> age = age;
		}
		int age;

		//返回对象应该以引用的方式Person&
		//如果以值方式返回，则调用拷贝构造函数Person PersonAddAge，返回拷贝的对象，与原无关。
		Person PersonAddAge(Person &p) {
			this -> age += p.age;
			cout << "此时我的值为：" << this->age;
			return *this;
		}
};


void test01() {
	Person p1(18);
	cout << "年龄为：" << p1.age << endl;
}

void test02() {
	Person p1(5);
	Person p2(7);
	p2.PersonAddAge(p1);
	cout << "p2年龄为：" << p2.age << "拷贝构造：" << p2.PersonAddAge(p1).age << endl;
}

/*4.3.3 空指针访问成员函数
空指针可以调用成员函数，但是需要判断是否用到this指针。
*/

int main() {
	test02();
	return 0;
}