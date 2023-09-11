#include <iostream>
using namespace std;

/*
const修饰成员函数
常函数： this指针，本质是指针常量
(1)成员函数后加const；void func() const
(2)常函数内不可以修改成员属性；
(3)成员属性声明时加关键字mutable后，在常函数中依然可以修改。
常对象：
const声明的对象；const Person p1
只能调用常函数。
*/

int main() {

	system("pause");
	return 0;
}